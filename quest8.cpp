//8. Write a C++ program to swap values of two int variables without using third variable



#include <iostream>
using namespace std;
int main() 
{
    int a, b;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;
   
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping:\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
    cout<< endl;
    return 0;
}
