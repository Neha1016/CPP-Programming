
// * , + , - , / , % . all are arithmetic operators

#include <iostream>
using namespace std;

int main () {
    int a, b;

    cout << "Enter two numbers :"  << endl ;
    cin >> a ;
    cin >> b ;

    cout << "Addition = " << a + b << endl;
    cout << "Difference = " << a - b << endl;
    cout << "Product = " << a * b << endl;
    cout << "Division = " << a / b << endl;
    cout << "Remainder = " << a % b << endl;

    return 0;
}
