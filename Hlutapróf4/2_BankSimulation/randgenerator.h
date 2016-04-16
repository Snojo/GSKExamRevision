#ifndef RANDGENERATOR_H
#define RANDGENERATOR_H

class RandGenerator
{
    public:
        // Constructor: Initializes random seed
        RandGenerator();
        // Returns a random integer in the range min to max
        int randomValue(int min, int max) const;
        // Returns a random value between 0 and 1
        double randomValue() const;
};

#endif // RANDGENERATOR_H
