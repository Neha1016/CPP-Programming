#include <iostream>
using namespace std;

int main () {

    int ab = 10;
    int cd = 20;

    // Create pointers for both variables
    int* p1 = &ab;
    int* p2 = &cd;

    cout << "Value of ab = " << *p1 << endl;
    cout << "Vlaue of cd = " << *p2 << endl;

    return 0;
}