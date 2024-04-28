// Assignment 2,Exercise 1.
// Write a program that inputs two numbers and determines which of the two numbers is the smallest. If the numbers are equal, display a message that they are equal.

#include <iostream>
using namespace std;

int main()
{
    int firstValue, secondValue;
    cout << " Please enter a numeric value:";
    cin >> firstValue;
    cout << " Please enter a numeric value:";
    cin >> secondValue;

    if (firstValue < secondValue) {
        cout << "The smallest value is:" << firstValue << endl;
    }

    else if (firstValue > secondValue) {
        cout << "The smallest valueis:" << secondValue << endl;
    }
   
    else {
        cout << "The vaules are equals" << endl;
    }


    return 0;

    
}
