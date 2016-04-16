#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H

#include <iostream>
using namespace std;

template <class T>
class SimpleVector
{
    public:
        SimpleVector();     // Default constructor: Initializes an empty vector with initial capacity 5
        ~SimpleVector();    // Destructor
        int  size() const;  // Returns the current number of elements
        void push_back (T elem);    // Appends elem to the vector
        void remove(T elem);        // Removes the first instance of elem from the vector and shifts the other elements to the left
        bool find(T elem, int& pos);    // Returns true if elem is found, else false
                                        // if found, 'pos' is the position of the first instance of elem in the array
        T& operator[] (int index);  // Returns the element at position 'index'
    private:
        T* arr;         // A pointer to an array that stores the elements
        int capacity;   // The maximum number of elements
        int count;      // The current number of elements
        void doubleSize();  // Doubles the capacity of the array

};

#endif // SIMPLEVECTOR_H
