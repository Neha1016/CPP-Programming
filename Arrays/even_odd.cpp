#include <iostream>
using namespace std;

int main()
{
    int numbers[5];
    int even = 0;
    int odd = 0;

    // Taking array input
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ":";
        cin >> numbers[i];
    }

    // count even and odd numbers
    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
       
    cout << "Even numbers = " << even << endl;
    cout << "Odd numbers = " << odd << endl;

    return 0;
}