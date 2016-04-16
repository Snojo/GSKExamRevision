#ifndef PQUEUE_H
#define PQUEUE_H

#include "Pair.h"

class PQueue
{
    public:
        PQueue();                       // Default constructor
        PQueue(const PQueue& pqueue);   // Copy constructor
        ~PQueue();                      // Destructor
        void enqueue(string name, int priority);    // Adds a new node (pair) in the correct place in the queue
                                                    // according to the priority
        string dequeue();                           // Removes the node with the highest priority and
                                                    // returns its string value
        bool empty() const;                         // Returns true if the queue is empty, else false
     private:
        // Insert a new node (pair) after the node 'afterMe'
        // 'afterMe' can be NULL, i.e. when inserting a new front node
        // This function should NOT be called if the queue is empty
        void insert(NodePtr afterMe, string name, int priority);

        NodePtr front;  // A pointer to the front of the queue, from where nodes are dequeued
};

#endif
