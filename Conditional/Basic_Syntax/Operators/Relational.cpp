
// == , != , > , < , >= , <= . all are relational operators

#include <iostream>
using namespace std;

int main () {
    int a, b;

    cout << "Enter two numbers :"  << endl ;
    cin >> a ;
    cin >> b ;

    cout  << (a == b) << endl;
    cout  << (a != b) << endl;
    cout  << (a < b) << endl;
    cout  << (a > b) << endl;
    cout  << (a >= b) << endl;
    cout  << (a <= b) << endl;


    return 0;
}
