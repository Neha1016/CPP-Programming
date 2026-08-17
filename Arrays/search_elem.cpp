#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {45, 67, 22, 56, 11};
    int search;

    // // Taking array input
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Enter number " << i + 1 << ":";
    //     cin >> numbers[i];
    // }

    cout << "Enter number to search :";
    cin >> search;

    // Search for the element
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == search)
        {
            cout << "Element found at index = " << i;
            return 0;
        }
    }

    cout << "Element not found ";

    return 0;
}