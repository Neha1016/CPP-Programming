
// Taking Input and passing to function
#include <iostream>
using namespace std;

// Function to calculate the square
int square(int n)
{
    return n * n;
}
int main()
    {
        int num;
        // Taking input form the user
        cout << "Enter a number:";
        cin >> num;

        // Calling the function
        cout << "Square = " << square(num);

        return 0;
    }