#include <iostream>
using namespace std;

// Function to swap two numbers using pointers
void swapNumbers(int*a,int*b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}

int main ()
{
    int a = 123;
    int b = 222;

    cout << "Before Swapping :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // pass address of a and b
    swapNumbers(&a, &b);

    cout << "\nAfter Swapping :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}