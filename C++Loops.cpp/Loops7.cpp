/*Q7- Write a program to print + pattern given below :*/

#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the pattern: ";
    cin >> size;

    if (size % 2 == 0) {
        cout << "Please enter an odd size for a symmetrical pattern." << endl;
        return 1;
    }

    int mid = size / 2;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i == mid || j == mid) {
                cout << "+";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}