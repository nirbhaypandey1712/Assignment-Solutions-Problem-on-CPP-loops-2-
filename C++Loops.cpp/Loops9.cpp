/*Q9- Write a C++ program to check whether a Number can be expressed as a Sum of Two Prime Numbers.
Eg. Sample Input - Enter a +ve Integer : 14
Sample Output –
14 = 3 + 11
14 = 7 + 7*/

#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1)
    return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
        return false;
    }
    return true;
}
int main() {
    int num;
    cout << "Enter a +ve Integer : ";
    cin >> num;
    bool flag = false;
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i)) {
            if (isPrime(num - i)) {
                cout << num << " = " << i << " + " << num - i << endl;
                flag = true;
            }
        }
    }
    if (!flag)
    cout << "No such combination exists";
    return 0;
}