#include <iostream>
using namespace std;

// Function to change the value using a pointer
void changeValue(int* ptr)
{
    *ptr = 100;

}
int main () {

    int num = 111;

    cout << "Before = " << num << endl;

    // Pass the address of num to the function
    changeValue(&num);

    cout << "After = " << num << endl;

    return 0;
}