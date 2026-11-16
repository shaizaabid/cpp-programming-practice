/*
Program 3: Linear search

Statement:
Ask the user for a number and search for it in an array of 10 integers. Print the index where it is found, or a message if it is not present.
*/

#include <iostream>
using namespace std;

int main() {
    int a[10] = {14, 22, 9, 31, 5, 18, 40, 27, 11, 36};
    int key, pos = -1;
    cout << "Enter number to find: ";
    cin >> key;
    for (int i = 0; i < 10; i++) {
        if (a[i] == key) {
            pos = i;
            break;
        }
    }
    if (pos == -1)
        cout << key << " not found" << endl;
    else
        cout << key << " found at index " << pos << endl;
    return 0;
}
