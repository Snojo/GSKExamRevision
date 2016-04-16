#include "PQueue.h"
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    PQueue pq;
    string s;
    int p;
    int count = 0;
    while(cin >> s >> p) {
        pq.enqueue(s, p);
        count++;
    }

    PQueue pq2(pq);     // Copy construction

    for(int i = 0; i < count; i++) {
      cout << pq.dequeue() << endl;
    }

    // Uncomment the following to test copy constructor
    //cout << endl;
    //for(int i = 0; i < count; i++) {
    //  cout << pq2.dequeue() << endl;
    //}

    return 0;
}
