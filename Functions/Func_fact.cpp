// Function to Check Even / Odd

#include <iostream>
using namespace std;

// Functions to calculate factorial
int factorial( int n)
{    
    int fact = 1;
    
        // Multiply numbers form 1 to n
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        return fact;
    }
    

int main ()
{
    int num;

    // Taking input from the user
    cout << "Enter a number :";
    cin >> num;
    
    // calling the factorail function
    cout << "Factorial = " << factorial(num);

    return 0;
}