#include <iostream>
using namespace std;

int main () {

    // Question 1

    int a = 10 , b = 5;

    cout << "Sum = " << a + b << endl ;

    // Question 2 

    int c = 11 , d = 15;

    cout << "Product = " << a * b << endl ;

    // question 3

    int num ;

    cout << "Enter number to check number is even or odd :"  << endl ;
    cin >> num ;

    cout << ((num % 2 == 0 ) ? "Even :" : "Odd :" ) << num << endl;

    // Question 4 

    int num1 ;

    cout << "Enter number to checkk number is postive or negative :"  << endl ;
    cin >> num1 ;

    cout << ((num1 >= 0 ) ? "Positive :" : "Negative :" ) << num1 << endl;

    // Question 5

    int marks;

    cout << "Enter Student marks :";
    cin >> marks;

    cout << ((marks >= 40) ? "True :" : "False :") << marks << endl;

    // Question 6 

    int num_between;

    cout << "Enter number   :";
    cin >> num_between;
    cout << (num_between >= 5 && num_between <= 10)  << endl;

    // Question 7 

    int equal_num1 , equal_num2;

    cout << "Enter number to check it is equal or not  :";
    cin >> equal_num1;
    cin >> equal_num2;

    cout << (equal_num1 == equal_num2) << endl;

    return 0;
}




