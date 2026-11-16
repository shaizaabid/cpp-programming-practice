/*
Program 5: Bubble sort

Statement:
Sort an array of 7 integers in ascending order using bubble sort and print the sorted array.
*/

#include <iostream>
using namespace std;

int main() {
    int a[7] = {64, 25, 12, 90, 33, 8, 51};
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 7; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
