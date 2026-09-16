#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {11, 22, 33, 44, 55};

    // Point to the first element of the array
    int *ptr = arr;

    // Print array elements using pointer
    for (int i = 0; i < 5; i++)
    {

        cout << *(ptr + i) << " ";
    }

    return 0;
}