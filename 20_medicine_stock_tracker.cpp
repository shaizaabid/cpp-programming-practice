/*
Program 20: Simple medicine stock tracker

Statement:
Keep the stock of 5 medicines in an array. Using a do while menu, let the user show the stock (marking low and out of stock items), sell an item, or restock an item. Do not allow selling more than the available stock.
*/

#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    int stock[N] = {50, 12, 0, 30, 8};
    int choice;
    do {
        cout << "\n1. Show stock\n2. Sell item\n3. Restock item\n0. Exit\n";
        cout << "Choice: ";
        cin >> choice;
        if (choice == 1) {
            for (int i = 0; i < N; i++) {
                cout << "Item " << i + 1 << ": " << stock[i];
                if (stock[i] == 0)
                    cout << " (out of stock)";
                else if (stock[i] < 10)
                    cout << " (low)";
                cout << endl;
            }
        } else if (choice == 2 || choice == 3) {
            int item, qty;
            cout << "Item number (1-" << N << "): ";
            cin >> item;
            cout << "Quantity: ";
            cin >> qty;
            if (item < 1 || item > N || qty <= 0) {
                cout << "Invalid input" << endl;
            } else if (choice == 2) {
                if (qty > stock[item - 1])
                    cout << "Not enough stock" << endl;
                else {
                    stock[item - 1] -= qty;
                    cout << "Sold" << endl;
                }
            } else {
                stock[item - 1] += qty;
                cout << "Restocked" << endl;
            }
        } else if (choice != 0) {
            cout << "Invalid choice" << endl;
        }
    } while (choice != 0);
    return 0;
}
