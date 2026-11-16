/*
Program 9: Fibonacci series

Statement:
Ask the user how many terms they want and print that many terms of the Fibonacci series (0 1 1 2 3 5 ...).
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many terms: ";
    cin >> n;
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}
