/*Q8 - Write a C++ program to print a triangle of prime numbers upto given number of lines of the triangle.
Sample input : Please enter the no of lines 6
Sample output :
2
3 5
7 11 13
17 19 23 29
31 37 41 43 47
53 59 61 67 71 73*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int x1;
int x2;
int x3;
int Number=3;
int Banner=0;
cout<<"Please enter the no of lines ";
cin>> x1;
int d= x1;
for(x2=1;x2<= x1; x2++)
{
for(int e=1;e<=d;e++)
{
cout<<" ";
}
if(x2==1)
{
cout<<"2\n";
}
else
{
for(x3=0; x3!= x2;)
{
Banner=0;
for ( int k=2;k<Number;k++)
{
if((Number%k)==0)
Banner=1;
}
if(Banner==0)
{ x3++;
cout<<Number<<" ";
}
Number++;
}
cout<<"\n";
}
d--;
}
getch();
return 0;
}