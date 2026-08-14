
#include <iostream>
using namespace std;

int main () {

    // Question 1

    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    // Question 2

    for (int i = 2; i <= 20; i+=2)
    {
        cout << i << " " << endl;
    }

    // Question 3

    int m;

    cout << "Enter number :";
    cin >> m;

    for (int i = 1; i <= 10; i++)
    {
        cout << m << " x " << i << " = " << m * i << endl;
    }

        return 0;
}