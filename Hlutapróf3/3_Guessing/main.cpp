#include <iostream>
#include "randgenerator.h"
#include "guessinggame.h"
#include "humanplayer.h"
#include "computerplayer.h"

using namespace std;

int main()
{
    RandGenerator randGen;
    GuessingGame game(randGen);
    HumanPlayer hp1, hp2;
    ComputerPlayer cp1(randGen), cp2(randGen);

    int ans = 0;

    cout << "Welcome to the Guessing Game!" << endl;

    do {
        game.menuInfo();
        cin >> ans;
        switch (ans) {
            case 1: game.play(hp1, hp2);
                    break;
            case 2: game.play(hp1, cp1);
                    break;
            case 3: game.play(cp1, cp2);
                    break;
        }
    } while ((ans == 1) || (ans == 2) | (ans == 3));

    cout << "********** Results **********" << endl;
    cout << "Human player 1 won " << hp1.getWins() << " times." << endl;
    cout << "Human player 2 won " << hp2.getWins() << " times." << endl;
    cout << "Computer player 1 won " << cp1.getWins() << " times." << endl;
    cout << "Computer player 2 won " << cp2.getWins() << " times." << endl;

    return 0;
}
