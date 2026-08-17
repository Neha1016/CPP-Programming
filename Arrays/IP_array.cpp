#include <iostream>
using namespace std;

int main()
{
    // Creating an array with 5 values
    int numbers[5];

    // Taking 5 values from the user
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ":";
        cin >> numbers[i];
    }

    // Printing array element
    cout << "\nArray elements are:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}