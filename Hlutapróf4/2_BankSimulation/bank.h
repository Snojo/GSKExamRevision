#ifndef BANK_H
#define BANK_H

#include <vector>
#include <queue>
#include "randgenerator.h"
using namespace std;

const int MAX_QUEUES = 3;

typedef queue<int> IntQueue;

class Bank
{
    public:
        // Constructs an instance of a Bank using a given random number generator
        Bank(RandGenerator random);

        // Simulates changes in the bank queues
        void simulate();

        // Displays the contents of each queue
        void display() const;

    private:
        // Returns the queue number  containing fewest customers
        int shortestQueue() const;

        // Random number generator
        RandGenerator randGen;

        // The bank queues
        vector<IntQueue> queues;

        // Customer number
        int customerNumber;
};

#endif // BANK_H
