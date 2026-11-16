/*
Program 15: Grade calculator

Statement:
Take the scores of n students and store them in an array. Assign a grade to each student: A for 85 and above, B for 70 and above, C for 55 and above, D for 40 and above, otherwise F.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Number of students: ";
    cin >> n;
    int score[30];
    for (int i = 0; i < n; i++) {
        cout << "Score of student " << i + 1 << ": ";
        cin >> score[i];
    }
    for (int i = 0; i < n; i++) {
        char grade;
        if (score[i] >= 85) grade = 'A';
        else if (score[i] >= 70) grade = 'B';
        else if (score[i] >= 55) grade = 'C';
        else if (score[i] >= 40) grade = 'D';
        else grade = 'F';
        cout << "Student " << i + 1 << ": " << score[i] << " -> " << grade << endl;
    }
    return 0;
}
