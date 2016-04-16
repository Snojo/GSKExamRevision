#include <iostream>
#include "minmax.h"
using namespace std;

int main()
{
    const int MIN = 1000;
    const int MAX = -1000;

    int arr1[6] = {5, 3, 6, 1, 4, 8};
    int mini = MIN;
    int maxi = MAX;
    minmax(arr1, 0, 5, mini, maxi);
    cout << "Min: " << mini << endl;    // 1
    cout << "Max: " << maxi << endl;    // 8

    int arr2[15] = {6, 9, 14, -1, 32, 5, -12, 7, 11, -4, 67, 2, 14, -5, 10};
    mini = MIN;
    maxi = MAX;
    minmax(arr2, 0, 14, mini, maxi);
    cout << "Min: " << mini << endl;    // -12
    cout << "Max: " << maxi << endl;    // 67

    return 0;
}
