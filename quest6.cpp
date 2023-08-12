// 6. Write a C++ program to calculate an average of 3 numbers.

#include <iostream>
using namespace std;

int main() 
{
    int a,b,c;
    int sum=0;
    cout << "Enter the Three number\n" ;
    cin>>a>>b>>c;
    sum=a+b+c;
    cout<<"Average is = "<<sum/3.0f;
    cout << endl;
    return 0;
}