/*
Program 19: Number pyramid pattern

Statement:
Take the number of rows from the user and print a number pyramid using nested loops. Row 1 prints 1, row 2 prints 1 2, and so on, centred with spaces.
*/

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        for (int s = 1; s <= rows - i; s++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}
