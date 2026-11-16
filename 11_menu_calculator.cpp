/*
Program 11: Menu calculator with do while and switch

Statement:
Make a calculator menu with add, subtract, multiply and divide options. Keep showing the menu using a do while loop until the user chooses 0 to exit. Handle division by zero and invalid choices.
*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b;
    do {
        cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n0. Exit\n";
        cout << "Choice: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }
        switch (choice) {
            case 1: cout << "Result = " << a + b << endl; break;
            case 2: cout << "Result = " << a - b << endl; break;
            case 3: cout << "Result = " << a * b << endl; break;
            case 4:
                if (b != 0)
                    cout << "Result = " << a / b << endl;
                else
                    cout << "Cannot divide by zero" << endl;
                break;
            case 0: cout << "Goodbye" << endl; break;
            default: cout << "Invalid choice" << endl;
        }
    } while (choice != 0);
    return 0;
}
