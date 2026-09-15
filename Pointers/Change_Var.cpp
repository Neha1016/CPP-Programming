#include <iostream>
using namespace std;
int main () {

    int num = 50;

    // Store the address of num 
    int *ptr = &num;

    // Change the value of num through the pointer
    *ptr = 199;

    cout << "Value of num = " << num << endl;

    return 0;
}