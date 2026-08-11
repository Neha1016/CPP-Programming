// If inside if 

#include <iostream>
using namespace std;

int main () {

    int age;

    cout << "Enter age:" << endl;
    cin >> age;

    if (age >= 18)
    {
       if (age <= 60)
       {
           cout << "Adult";
       }
    }
       return 0; 

}

