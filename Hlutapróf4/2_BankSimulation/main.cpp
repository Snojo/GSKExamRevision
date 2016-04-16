#include <iostream>
#include "bank.h"
#include "randgenerator.h"
using namespace std;

int main() {

    RandGenerator randGen;
    Bank bank(randGen);

	char ch;
	do {
        bank.simulate();
        bank.display();
        cin.get(ch);
	} while (ch != 'q' && ch != 'Q');

	return 0;
}
