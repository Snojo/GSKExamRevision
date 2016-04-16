#ifndef SET_H
#define SET_H

#include "Node.h"

template <class T>
class Set
{
    public:
        Set();      // Default constructor
        ~Set();     // Destructor

        // Inserts the specified value into the set as the first node, but only if the value is not already in the set
        void insert(T val);

        // Returns true if the given value is found, else false
        bool find(T& val) const;

        // Returns the size of the set
        int size() const;

        // Removes the node with the given value from the set
        void remove(T& val);

        // For writing to an output stream
        template <class U>
        friend ostream& operator <<(ostream& outs, const Set<U>& aSet);

    private:
        Node<T>* header;  // A header node, a sentinel node which points to the first node in the set
};

#endif
