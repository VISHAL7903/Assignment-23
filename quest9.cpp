//9. Write a C++ program to find the maximum of two numbers.

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number\n";
    cin >> a;
    cout<<"Enter the second number\n";
    cin >> b;

    int maximum = (a > b) ? a : b;
    cout << "The maximum numbers is = "<< maximum;
    cout << endl;
    return 0;

}