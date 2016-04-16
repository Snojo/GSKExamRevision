#include <cstdlib>
#include <ctime>
#include "randgenerator.h"

RandGenerator::RandGenerator()
{
    srand(time(0)); // Seed the random number generator
}

// Returns a random integer in the range min to max
int RandGenerator::randomValue(int min, int max) const {
    return min + rand() % (max - min + 1);
}

// Returns a random value between 0 and 1
double RandGenerator::randomValue() const {
    return (double) rand() / RAND_MAX;
}
