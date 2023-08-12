//. Write a C++ program to calculate the volume of a cuboid.


#include <iostream>
using namespace std;

int main() 
{
    int l,b,h,volume;
   
    cout << "Enter the Length of cuboid\n" ;
    cin>>l;

    cout << "Enter the breadth of cuboid\n" ;
    cin>>b;

    cout << "Enter the Height of cuboid\n" ;
    cin>>h;

    volume=l*b*h;
    cout<<"The Volume of Cuboid is = " <<volume;
    cout << endl;
    return 0;
}
