#include <iostream>
#include <cmath> // Required for math functions
using namespace std;

int main(int argc, char const *argv[])
{
    // ! MATH FUNCTIONS
    // ? Common functions include sqrt(), pow(), abs(), log(), ceil(), floor(), etc.

    // ? Square root
    double root = sqrt(25); // Returns the square root of 25
    cout << "Square root of 25: " << root << endl;

    // ? Power
    double power = pow(2, 3); // Returns 2 raised to the power of 3 (2^3)
    cout << "2 raised to the power of 3: " << power << endl;

    // ? Absolute value
    double absolute = abs(-10); // Returns the absolute value of -10
    cout << "Absolute value of -10: " << absolute << endl;

    // ? ceil() and floor()
    double ceilValue = ceil(4.25);   // Returns the smallest integer greater than or equal to 4.25
    double floorValue = floor(4.75); // Returns the largest integer less than or equal to 4.75
    cout << "Ceil of 4.25: " << ceilValue << endl;
    cout << "Floor of 4.75: " << floorValue << endl;

    // ? log() and log10()
    double logValue = log(2.71828); // Returns the natural logarithm of e (2.71828)
    double log10Value = log10(100); // Returns the base-10 logarithm of 100
    cout << "Natural logarithm of e: " << logValue << endl;
    cout << "Base-10 logarithm of 100: " << log10Value << endl;

    // ? round()
    double roundValue = round(4.49); // Rounds 4.49 to the nearest integer
    cout << "Round of 4.49: " << roundValue << endl;

    return 0;
}
