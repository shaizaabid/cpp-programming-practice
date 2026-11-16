/*
Program 1: Sum and average of marks

Statement:
Take the number of subjects and the marks of each subject from the user. Store the marks in an array, then print their sum and average.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many subjects: ";
    cin >> n;
    int marks[50];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cout << "Marks " << i + 1 << ": ";
        cin >> marks[i];
        sum += marks[i];
    }
    cout << "Sum = " << sum << endl;
    cout << "Average = " << (double)sum / n << endl;
    return 0;
}
