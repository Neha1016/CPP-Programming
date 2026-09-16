#include <iostream>
using namespace std;

int main () {

    int num;

    // Take input from the user
    cout << "Enter a number : ";
    cin >> num;

    // Store the address of num
    int *ptr = &num;

    cout << "Value = " << *ptr << endl;
    cout << "Address = " << ptr << endl;

    return 0;
}