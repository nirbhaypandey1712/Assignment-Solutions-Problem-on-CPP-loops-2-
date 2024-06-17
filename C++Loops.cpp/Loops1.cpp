/*Q1 - Write a program to calculate the factorial of a number.
Explanation : Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n.
E.g.-
4! = 1*2*3*4 = 24
3! = 3*2*1 = 6
Also,
1! = 1
0! = 0*/

#include <iostream>
using namespace std;
int main() {
    int num, i, fact = 1;
    cout << "Enter a number: ";
    cin >> num;
    if(num < 0) {
        cout << "Factorial of negative numbers is not defined.";
        return 0;
    }
    else if(num == 0 || num == 1) {
        cout << "Factorial of " << num << " is 1.";
    }
    else {
        for(i = 1; i <= num; i++) {
            fact *= i;
        }
        cout << "Factorial of " << num << " is " << fact << ".";
    }
    return 0;
}