#ifndef GUESSINGGAME_H
#define GUESSINGGAME_H

#include "randgenerator.h"
#include "player.h"

enum GuessStatus {NONE, LOW, HIGH, CORRECT};

const int MIN_VALUE = 0;
const int MAX_VALUE = 99;

class GuessingGame
{
    public:
        // Constructor
        GuessingGame(RandGenerator& r);
        // Displays the menu
        void menuInfo() const;
        // plays one game between player1 and player2
        void play(Player& player1, Player& player2);
    private:
        // Initializes member variables
        void init();
        // Checks the guess of the player,
        // sets 'lowestPossible' and 'highestPossible',
        // and increments player wins
        GuessStatus checkGuess(Player& player, int guess, int answer, int numGuesses);
        // The lowest possible number, given the previous guesses
        int lowestPossible;
        // The highest possible number, given the previous guesses
        int highestPossible;
        // A random number generator used for picking a number that the players need to guess
        RandGenerator randGen;
};

#endif // GUESSINGGAME_H
