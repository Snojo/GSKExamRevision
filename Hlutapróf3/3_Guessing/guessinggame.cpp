#include <iostream>
#include "guessinggame.h"
#include "player.h"
using namespace std;

GuessingGame::GuessingGame(RandGenerator& r)
{
    randGen = r;    // The random number generator
}

void GuessingGame::init() {
    lowestPossible = MIN_VALUE;
    highestPossible = MAX_VALUE;
}

void GuessingGame::menuInfo() const
{
    cout << "****************************" << endl;
    cout << "Select the game type (1-3) from the menu, any other number to quit" << endl;
    cout << "1. Human vs. Human" << endl;
    cout << "2. Human vs. Computer" << endl;
    cout << "3. Computer vs. Computer" << endl;
    cout << "****************************" << endl;
}

// plays one game between player1 and player2
void GuessingGame::play(Player& player1, Player& player2) {
    init();

    int answer = 0, guess = 0, numGuesses = 0;
    GuessStatus status = NONE;

    answer = randGen.randomValue(MIN_VALUE, MAX_VALUE);     // This is the number the players need to guess

    while (status != CORRECT) {
        cout << "Player 1's turn to guess." << endl;
        guess = player1.guessNumber(lowestPossible, highestPossible);
        numGuesses++;
        status = checkGuess(player1, guess, answer, numGuesses);

        // You need to implement this missing part

    }
}

// Checks the guess of the player,
// sets 'lowestPossible' and 'highestPossible',
// and increment player wins
GuessStatus GuessingGame::checkGuess(Player& player, int guess, int answer, int numGuesses) {
    cout << "Guess no. " << numGuesses << ", you guessed " << guess << ". ";
    if (answer == guess) {
        cout << "You're right! You win!" << endl;

        // You need to implement this missing part

        return CORRECT;
    }
    else if (answer < guess) {
        cout << "Your guess is too high." << endl;

        // You need to implement this missing part

        return HIGH;
    }
    else {
        cout << "Your guess is too low." << endl;

        // You need to implement this missing part

        return LOW;
    }
}
