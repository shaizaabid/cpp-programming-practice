/*
Program 2: Largest and smallest in an array

Statement:
Given an array of 8 integers, find and print the largest and the smallest element.
*/

#include <iostream>
using namespace std;

int main() {
    int a[8] = {42, 7, 19, 88, 3, 56, 71, 25};
    int big = a[0], small = a[0];
    for (int i = 1; i < 8; i++) {
        if (a[i] > big) big = a[i];
        if (a[i] < small) small = a[i];
    }
    cout << "Largest = " << big << endl;
    cout << "Smallest = " << small << endl;
    return 0;
}
