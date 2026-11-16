/*
Program 12: Password attempts

Statement:
Ask the user for a password with a maximum of 3 attempts using a do while loop. Print access granted on a correct entry, or account locked after 3 wrong attempts.
*/

#include <iostream>
using namespace std;

int main() {
    int password = 4821;
    int entry;
    int attempts = 0;
    do {
        cout << "Enter password: ";
        cin >> entry;
        attempts++;
        if (entry == password) {
            cout << "Access granted" << endl;
            break;
        }
        cout << "Wrong password" << endl;
    } while (attempts < 3);
    if (entry != password)
        cout << "Account locked" << endl;
    return 0;
}
