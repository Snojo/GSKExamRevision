#include <iostream>
#include "sequence.h"
using namespace std;

int main()
{
    int n;
    cout << "Input size of sequence (>= 1): ";
    cin >> n;

    sequence(n);
    return 0;
}
