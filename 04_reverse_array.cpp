/*
Program 4: Reverse an array

Statement:
Reverse an array of 6 integers in place by swapping the first and last elements, then the second and second last, and so on. Print the reversed array.
*/

#include <iostream>
using namespace std;

int main() {
    int a[6] = {1, 2, 3, 4, 5, 6};
    int i = 0, j = 5;
    while (i < j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    for (int k = 0; k < 6; k++)
        cout << a[k] << " ";
    cout << endl;
    return 0;
}
