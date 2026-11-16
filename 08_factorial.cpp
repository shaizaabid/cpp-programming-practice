/*
Program 8: Factorial

Statement:
Take a number from the user and print its factorial. If the number is negative, print that the factorial is not defined.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0) {
        cout << "Factorial not defined for negatives" << endl;
    } else {
        for (int i = 2; i <= n; i++)
            fact *= i;
        cout << n << "! = " << fact << endl;
    }
    return 0;
}
