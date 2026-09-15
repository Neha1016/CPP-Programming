#include <iostream>
using namespace std;
int main () {

    int num = 10;

    // Store the address of num in pointer p
    int *p = &num;

    cout << "Value of num = " << num << endl;
    cout << "Address of num = " << &num << endl;
    cout << "Value stored in p = " << p << endl;

    // * p gives the value stored  at the address
    cout << "Value using pointer = " << *p << endl;

    return 0;
}