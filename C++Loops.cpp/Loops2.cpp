/*Q2 - Write a program to print all Armstrong numbers between 100 to 500.
Explanation : A three digit number is called the Armstrong number if the sum of the cube of its digit is equal to
the number itself.
E.g.- 153 is an Armstrong number because (13)+(53)+(33) = 153.*/

#include <iostream>
using namespace std;
int main() {
    int num, digit1, digit2, digit3, sum;
    cout << "Armstrong numbers between 100 to 500 are: ";
    for (num = 100; num <= 500; num++) {
        digit1 = num / 100;
        digit2 = (num % 100) / 10;
        digit3 = num % 10;
        sum = (digit1 * digit1 * digit1) + (digit2 * digit2 * digit2) + (digit3 * digit3 * digit3);
        if (sum == num) 
        cout << num << " ";
    }
    return 0;
}