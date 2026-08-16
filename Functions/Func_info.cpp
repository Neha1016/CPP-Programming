
// // Declaration

// int add(int, int);

// // Definition

// int add(int a, int b)
// {
//     return a + b;
// }

// // Calling

// int result = add(10, 20);


#include <iostream>
using namespace std;

// Function declaration
int add(int, int);

int main ()
{
    // Calling the function
    int result = add(11, 22);

    cout << "Sum = " << result;

    return 0;
}

// Function defintion
int add(int a, int b)
{
    return a + b;
}
