/*
Program 6: Count even and odd numbers

Statement:
Count how many even and how many odd numbers are present in an array of 10 integers, and print both counts.
*/

#include <iostream>
using namespace std;

int main() {
    int a[10] = {3, 8, 15, 22, 7, 10, 91, 64, 5, 12};
    int even = 0, odd = 0;
    for (int i = 0; i < 10; i++) {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    return 0;
}
