
//10. Write a C++ program to add all the numbers of an array of size 10.


#include <iostream>
using namespace std;

int main() 
{
    int arr[5]; 
    int size = 5;
    int sum = 0;

    // Input numbers into the array and calculate the sum
    for (int i = 0; i < size; i++) 
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of all elements in the array is: " << sum;

    return 0;
}
