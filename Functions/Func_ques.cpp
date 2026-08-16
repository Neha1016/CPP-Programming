// Function to Check Even / Odd

#include <iostream>
using namespace std;

// Functions to check whether a number is even or odd
void checkEvenOdd( int n)
{    
    if (n % 2 == 0)
    {
        cout << "Even Number:" << n << endl;
    }
    else
    {
        cout << "Odd Number:" << n << endl;
    }
}

int main ()
{
    int num;

    // Taking input from the user
    cout << "Enter a number :";
    cin >> num;
    
    // calling the function
    checkEvenOdd(num);

    return 0;
}