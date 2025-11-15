#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    // ! STL: Standard Template Library
    // * set of C++ template classes that provides generic classes and functions to implement common data structures and algorithms
    // ! STL has four components: Algorithms, Containers, Functions, and Iterators
    // ? Algorithms: STL provides a set of algorithms that perform operations on containers
    // ? Commonly Used Algorithms:
    // * Searching: find(), binary_search()
    // * Sorting: sort(), stable_sort()
    // * Modifying: copy(), replace(), swap()
    // * Set Operations: set_union(), set_intersection()
    // * Min/Max Operations: min(), max(), min_element(), max_element()
    // * Counting: count(), count_if()

    // ? Containers: STL provides a set of container classes that implement data structures.
    // ! Types of Containers:
    // ? Sequence Containers: Store data in a linear order.
    // * vector: Dynamic array, allows random access.
    // * deque: Double-ended queue, allows fast insertion/removal from both ends.
    // * list: Doubly linked list, allows efficient insertion/removal anywhere.

    // ? Associative Containers: Store data in key-value pairs or as sets and support fast retrieval based on keys.
    // * set: Collection of unique elements, sorted.
    // * map: Key-value pairs where each key is unique and sorted.
    // * multiset: Similar to set but allows duplicate elements.
    // * multimap: Similar to map but allows multiple values for the same key.

    // ? Unordered Containers: Use hash tables for storing elements.
    // * unordered_set: Collection of unique elements with no order.
    // * unordered_map: Key-value pairs with no order.
    // * unordered_multiset: Set with no order that allows duplicates.
    // * unordered_multimap: Map with no order that allows duplicate keys.

    //?  Container Adapters: Provide a different interface over existing containers.
    // * stack: LIFO (Last In First Out) structure.
    // * queue: FIFO (First In First Out) structure.
    // * priority_queue: Like a queue but allows extraction of elements based on priority.

    // ? Functions: STL provides a set of functions that perform operations on containers

    // ? Iterators: Iterators are objects that point to elements within containers. They provide a way to traverse containers and access elements. They work similar to pointers.
    // ! Types of Iterators:
    // * Input Iterators: Can only read the elements.
    // * Output Iterators: Can only write to the elements.
    // * Forward Iterators: Can read and write elements while moving forward.
    // * Bidirectional Iterators: Can move in both directions, forward and backward.
    // * Random Access Iterators: Can directly access any element by an index (like pointers).

    // ? Create a vector container
    vector<int> numbers = {10, 20, 30, 40, 50};

    // ? Traverse using an iterator
    vector<int>::iterator it;
    for (it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << " "; // Dereference the iterator to get the value
    }
    cout << endl;

    // ? Algorithm: find an element
    it = find(numbers.begin(), numbers.end(), 30);
    if (it != numbers.end())
    {
        cout << "Element 30 found!" << endl;
    }

    // ? Algorithm: sort the vector
    sort(numbers.begin(), numbers.end());

    // ? Print sorted elements
    for (int num : numbers)
    {
        cout << num << " ";
    }
    return 0;
}