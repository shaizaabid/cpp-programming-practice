/*
Program 16: Frequency of digits

Statement:
Given an array of digits (0 to 9), count how many times each digit appears using a frequency array, and print only the digits that appear.
*/

#include <iostream>
using namespace std;

int main() {
    int a[12] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 9};
    int freq[10] = {0};
    for (int i = 0; i < 12; i++)
        freq[a[i]]++;
    for (int d = 0; d < 10; d++) {
        if (freq[d] > 0)
            cout << d << " appears " << freq[d] << " time(s)" << endl;
    }
    return 0;
}
