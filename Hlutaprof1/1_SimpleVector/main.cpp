#include <iostream>
#include "simplevector.cpp"
using namespace std;

template <class T>
void printVector(SimpleVector<T>& v)
{
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

template <class T>
void find(SimpleVector<T>&v, T elem) {
    int pos;
    if (v.find(elem, pos)) {
        cout << "Found element " << elem << " in position " << pos << endl;
    }
    else {
        cout << "Did not find element " << elem << endl;
    }
}

int main()
{
    const int MAX1 = 5;
    const int MAX2 = 15;
    const int FIRST_LETTER = 97;

    SimpleVector<int> v1;
    SimpleVector<char> v2;

    for (int i = 0; i < MAX1; i++) {
        v1.push_back(i);
    }
    cout << "First vector:" << endl;
    printVector(v1);

    find(v1, 3);
    find(v1, 10);

    for (int i = FIRST_LETTER; i < FIRST_LETTER + MAX2; i++) {
        v2.push_back(i);    // Should result in an expansion of the vector
    }
    cout << "Second vector:" << endl;
    printVector(v2);

    find(v2, 'f');
    find(v2, 'j');
    find(v2, 'z');

    v2.remove('k');
    cout << "Second vector:" << endl;
    printVector(v2);
    find(v2,'k');

    return 0;
}
