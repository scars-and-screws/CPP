#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    // ! File I/O
    // * File I/O (Input/Output) is a way of reading and writing data to and from files.
    // *file operations are performed using file streams, and the Standard Library provides the <fstream> header to facilitate file handling.
    // ? To perform file operations, you need to include the <fstream> header.

    // ! Some key functions of file I/O:
    // ? .open(): Opens a file.
    // ? .close(): Closes a file.
    // ? .write(): Writes binary data to a file.
    // ? .read(): Reads binary data from a file.
    // ? .getline(): Reads a line from a file.
    // ? .is_open(): Checks if a file is successfully opened.
    // ? .eof(): Checks if the end of the file has been reached.
    // ? .seekg(): Moves the read pointer to a specific position in a file.
    // ? .seekp(): Moves the write pointer to a specific position in a file.
    // ? .tellg(): Returns the current position of the read pointer.
    // ? .tellp(): Returns the current position of the write pointer.
    // ? .put(): Writes a single character to a file.
    // ? .get(): Reads a single character from a file.
    // ? .flush(): Flushes the output buffer to the file.

    // !     File Streams
    // ? C++ provides three types of file streams:
    // * ifstream (Input File Stream) – Used for reading from files.
    // * ofstream (Output File Stream) – Used for writing to files.
    // * fstream (File Stream) – Used for both reading and writing.

    // ! Writing to a File using ofstream
    // * To write to a file, we need to create an object of the ofstream class and open the file using the open() method. The open() method takes the file name and the mode as arguments.
    // * Use the << operator to write data to the file. and close the file using the close() method.

    ofstream outFile;             // Create an output file stream object
    outFile.open("cpp_shit.txt"); // Open the file (it will be created if it doesn't exist)

    // Write data to the file
    outFile << "Some of the CPP shit using fstream .\n";
    outFile << "It's next line bitch \n";

    outFile.close(); // Close the file
    cout << "Shit is written successfully!" << endl;

    // ! Reading from a File (Using ifstream)
    // * Use the >> operator or the getline() function to read data from the file.
    ifstream inFile;
    inFile.open("cpp_shit.txt");
    if (!inFile)
    {
        cout << "Error while opening shitty file" << endl;
        return 1;
    }
    string line;
    while (getline(inFile, line)) // Read the file line by line
    {
        cout << line << endl;
    }
    inFile.close();

    // ! Using fstream for Both Reading and Writing
    //  * File Opening Modes
    // * When opening a file, we can specify additional flags to define how the file will be accessed. These modes are defined in the <ios> class.
    // ? ios::in: Open for reading.
    // ? ios::out: Open for writing.
    // ? ios::app: Append to the end of the file.
    // ? ios::trunc: Discards the contents if the file already exists.
    // ? ios::binary: Open in binary mode.
    fstream fileStream;
    fileStream.open("cpp_shit.txt", ios::in | ios::out | ios::app);
    if (!fileStream)
    {
        cout << "Error while opening the file for reading and writing" << endl;
        return 1;
    }

    // Write additional data to the file
    fileStream << "Appending some more Shit to the shitty txt.\n";

    // Move the file pointer to the beginning for reading
    fileStream.seekg(0, ios::beg);

    // Read the file content
    while (getline(fileStream, line))
    {
        cout << line << endl;
    }

    fileStream.close();

    // ! Writing to a binary file
    // ? We can write to a binary file using the write() function. It writes data as raw bytes to the file, ensuring the exact memory representation is preserved.
    ofstream outFileB("data.bin", ios::binary); // Open file in binary mode
    int num = 12345;

    if (outFileB.is_open())
    {
        outFileB.write(reinterpret_cast<char *>(&num), sizeof(num)); // Write binary data
        outFileB.close();                                            // Close the file
    }
    else
    {
        cout << "Unable to open file!" << endl;
    }

    // ! Reading from a binary file
    // ? read() function reads raw data (in bytes) into a variable.

    ifstream inFileB("data.bin", ios::binary); // Open file in binary mode
    int num_container;

    if (inFileB.is_open())
    {
        inFileB.read(reinterpret_cast<char *>(&num_container), sizeof(num_container)); // Read binary data
        inFileB.close();                                                               // Close the file
        cout << "Read number: " << num_container << endl;
    }
    else
    {
        cout << "Unable to open file!" << endl;
    }

    return 0;
}