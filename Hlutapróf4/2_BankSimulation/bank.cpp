#include <iostream>
#include "bank.h"
using namespace std;

Bank::Bank(RandGenerator random) : randGen(random), queues(MAX_QUEUES), customerNumber(0)
{
}

void Bank::simulate() {
    // Simulates changes in the bank queues
    // During each run of the simulation it is equally likely (i.e. selected randomly)
    // that a new customer is added to a queue or a customer is removed from a queue.
    // A new customer is added to the shortest queue
    // If a customer is to be removed from a queue then the queue is selected randomly
    // If the selected queue to be removed from is empty, no changes are made during the simulation
    // This method also prints out info about addition, removal or no change (see output.txt)

}

void Bank::display() const {

    // Displays the contents of each queue, e.g. like this:
    // q1: **
    // q2: *
    // q3: ***
    // Where one * represents one customer
    // This implementation must use a constant iterator to iterate through the vector of queues
}

int Bank::shortestQueue() const {

    // Returns the queue number  containing fewest customers
    // If two or more queues are equally short, then the former (first) queue number is returned

}
