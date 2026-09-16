#include <iostream>
using namespace std;

int main()
{

    int arr[3] = {11, 22, 33};

    // Point to the first element of the array
    int *ptr = arr;

    cout << *ptr << endl;

    // Move pointer to the next element
    ptr++;

    cout << *ptr << endl;

    // Move pointer to the next element
    ptr++;

    cout << *ptr << endl;

    return 0;
}