// Function to Find Largest of Two Numbers

#include <iostream>
using namespace std;

// Functions to find the larger number
int largest( int a , int b)
{    
    if ( a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main ()
{
    int a , b;

    // Taking two numbers as input from the user
    cout << "Enter two  number :";
    cin >> a >> b;

    // calling the function adn storing the result
    int result = largest(a, b);

    cout << "Largest = " << result;

    return 0;
}