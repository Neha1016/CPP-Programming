#include <iostream>
using namespace std;

int main() {

    int age;
    string name;

    cout << "Enter your name :";
    cin >> name;

    cout << "Enter your age :";
    cin >> age;
    cout << endl;

    cout << "My name is " << name << endl;
    cout << "I am " << age << " years old." << endl;

    cout << endl;

    int num1 , num2 , num3 ;

    cout << "Enter three numbers :";

    cin >> num1 >> num2 >> num3 ;

    cout << "The numbers you entered are : " << num1 << "," << num2 << " and " << num3 << endl;

    float n1, n2;

    cout << "Enter two numbers :";

    cin >> n1 >> n2 ;

    cout << "The numbers are you entered are :" << n1 << " and " << n2 << endl;

    return 0;
  }