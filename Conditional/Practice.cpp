#include <iostream>
using namespace std;

int main () {

    // Question 1

    int num;

    cout << "Enter number to check it is positive , negative or zero :" << endl;
    cin >> num;

    if (num > 0 ) 
    {
        cout << "Positive:" << endl;
    }
    else if (num == 0)
    {
        cout << "Zero";
    }
    else{
        cout << "Negative:" << endl;
    }

    // Question 2

    int num1;

    cout << "Enter number to check it is even or odd :" << endl;
    cin >> num1;

    if (num1 % 2 == 0)
    {
        cout << "Even:" << endl;
    }
    else{
        cout << "Odd :" << endl;
    }

    // Question 3

    int a, b;

    cout << "Enter number to two numbers to check which is largest:" << endl;
    cin >> a >> b;

    if (a > b ) 
    {
        cout << "a is greater than b :" << a << endl;
    }
    else{
        cout << "b is grater than a : "<< b << endl;
    }

    // Question 4

    int c, d, e;

    cout << "Enter number to three numbers to check which is largest :" << endl;
    cin >> c >> d >> e;

    if (c > d && c > e)
    {
        cout << "c is greater :" << c << endl;
    }
    else if  (d > c && d > e )
    {
        cout << "d is greater :" << d << endl;
    }
    else{
        cout << "e is greater :" << e << endl;
    }

    // Question 5

    int result;

    cout << "Enter marks to check result :" << endl;
    cin >> result;

    if (result >= 60) 
    {
        cout << "Pass :" << result << endl;
    }
    else 
    {
        cout << "Fail:" << result << endl;
    }

    // Question 6

    int student_marks;

    cout << "Enter marks :" << endl;
    cin >> student_marks;

    if (student_marks >= 90)
     {
        cout << "Grade A";
    }
    else if (student_marks >= 75)
    {
        cout << "Grade B";
    }
    else if (student_marks >= 50)
    {
        cout << "Grade C";
    }
    else{

        cout << "Fail:" << endl;
    }

    // Question 7 

    int age;

    cout << "Enter age:" << endl;
    cin >> age;

    if (age >= 18)
    {
       if (age <= 60)
       {
           cout << "Adult:" << endl;
       }
    }

    // Question 8

    int number;

    cout << "Enter number :" << endl;
    cin >> number;

    if (number / 5 ) 
    {
        cout << "True :" << number << endl;
    }
    else{
        cout << "False:" << number << endl;
    }

    return 0;
}