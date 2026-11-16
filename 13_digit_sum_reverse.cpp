/*
Program 13: Digit sum and reverse of a number

Statement:
Take a number from the user. Using a while loop, find the sum of its digits and also the number written in reverse.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0, rev = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        rev = rev * 10 + digit;
        n /= 10;
    }
    cout << "Sum of digits = " << sum << endl;
    cout << "Reversed = " << rev << endl;
    return 0;
}
