/*Q10- Write a C++ program to print a rectangle out of *
Sample Input :
Please Enter the number of StarRows:
2
Please Enter the number of StarColumns:
3
sample output :
* * *
* * **/

#include <iostream>
using namespace std;
int main (){
    int rows, cols;
    cout << "Please Enter the number of StarRows: ";
    cin >> rows;
    cout << "Please Enter the number of StarColumns: ";
    cin >> cols;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}