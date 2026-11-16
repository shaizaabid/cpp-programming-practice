/*
Program 17: Remove duplicates from a sorted array

Statement:
Given a sorted array of 10 integers that contains repeated values, copy only the unique values into a new array and print it.
*/

#include <iostream>
using namespace std;

int main() {
    int a[10] = {1, 1, 2, 3, 3, 3, 4, 5, 5, 6};
    int unique[10];
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (i == 0 || a[i] != a[i - 1]) {
            unique[count] = a[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++)
        cout << unique[i] << " ";
    cout << endl;
    return 0;
}
