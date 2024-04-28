// Assignment 3, Exercise 4.cpp : Write a program that asks the user for a year and computes whether that year is a leap year.
//


#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if (year > 1582)
    {
        if (year % 4 == 0)
            cout << year << " is a leap year";
        else if (year % 400 == 0)
            cout << year << " is a leap year";
        else if (year % 100)
            cout << year << " is not a leap year";
    }
    else
        cout << year << " is not an exception";

    return 0;

}
