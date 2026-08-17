#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {99, 88, 77, 66, 55};

    cout << "Array in reverse order :";

    //print elements from last index to first
    for (int i = 4; i >= 0; i--)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}
    