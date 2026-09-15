#include <iostream>
using namespace std;
int main () {

    int a = 20;

    // Create a pointer and store the address of a
    int *ptr = &a;

    cout << "Value of a = " << a << endl;
    cout << "Address of a = " << &a << endl;
    cout << "Pointer Value  = " << ptr << endl;

    // * p gives the value stored  at the address
    cout << "Value using pointer = " << *ptr << endl;

    return 0;
}