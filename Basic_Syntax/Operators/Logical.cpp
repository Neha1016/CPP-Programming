// && , ! , || . all are Logical operator 

#include <iostream>
using namespace std;

int main () {

    int age;

    cout << "Enter age:" << endl;
    cin >> age;

    cout << (age >= 18 && age <= 60) << endl;     //  Logical AND
    cout << (age >= 18 || age <= 60) << endl;     // Logical OR
    cout << (!(age >= 18 )) << endl;              // Logical NOT
    return 0;
}