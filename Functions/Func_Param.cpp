#include <iostream>
using namespace std;

// Functions that takes a number as a paramter
void add( int a, int b)
{    
    // Print this
    cout << "Sum = " << a + b;
}

int main ()
{   
    // Passing (10 ,20) to the function 
    add(10, 20);

    return 0;
}