/*
Program 7: Multiplication table with while

Statement:
Take a number from the user and print its multiplication table from 1 to 10 using a while loop.
*/

#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= 10) {
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    }
    return 0;
}
