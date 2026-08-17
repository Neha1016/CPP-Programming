#include <iostream>
using namespace std;

int main()
{
    int numbers[5];
    int sum = 0;

    // Taking array input
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ":";
        cin >> numbers[i];
    }

    // calculate sum
    for (int i = 0; i < 5; i++)
    {
        sum = sum + numbers[i];
    }

    cout << "Sum = " << sum;

    return 0;
}