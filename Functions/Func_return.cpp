#include <iostream>
using namespace std;

// Function returns the sum of two numbers
int add( int a, int b)
{
    return a + b;
}

int main ()
{   
    // Store the returned value in result
    int result = add(20, 30);

    cout << "Sum = " << result;

    return 0;
}