#include <iostream>
#include <cstdio>
#include "Set.cpp"
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);

    // Each test case consists of an integer n and following that integer are n
    // integers which are inserted into the set.
    // You can add as many test cases as you like to input.txt
    int n;
    while (cin >> n) {
        Set<int> mySet;
        int e;
        for(int i = 0; i < n; i++) {
            cin >> e;
            mySet.insert(e);
        }
        cout << "Set size: " << mySet.size() << endl;
        cout << "Set elements: " << mySet;

        cin >> e;
        if (mySet.find(e)) {
            cout << "Found element " << e << endl;
        }
        else {
            cout << "Did not find element " << e << endl;
        }

        cin >> e;
        cout << "Removing element " << e << endl;
        mySet.remove(e);
        cout << "Set elements: " << mySet << endl;
    }
    return 0;
}
