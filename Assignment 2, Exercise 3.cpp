// Assignment 2, Exercise 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Write a program that translates a letter grade into a number grade. Letter grades are A, B, C, D, and F,.

#include <iostream>
using namespace std;

int main()
{

    string grade;
    cout << "Enter Grade letter:";
    cin >> grade;

    if (grade == "A") {
        cout << "The numeric value is :" << 4.0 << endl;
    }

    else if (grade == "A+") {

        cout << "The numeric value is " << 4.0 << endl;
    }

    else if (grade == "A-") {

        cout << "The numeric value is :" << 3.7 << endl;
    }

    else if (grade == "B+") {

        cout << "The numeric value is :" << 3.3 << endl;
    }

    else if (grade == "B") {

        cout << "The numeric value is :" << 3 << endl;
    }

    else if (grade == "B-") {

        cout << "The numeric value is :" << 2.7 << endl;
    }

    else if (grade == "C+") {

        cout << "The numeric value is :" << 2.3 << endl;
    }

    else if (grade == "C") {

        cout << "The numeric value is :" << 2 << endl;
    }

    else if (grade == "C-") {

        cout << "The numeric value is :" << 1.7 << endl;
    }

    else if (grade == "D+") {

    cout << "The numeric value is :" << 1.3 << endl;
}

    else if (grade == "D") {

        cout << "The numeric value is :" << 1 << endl;
    }

    else if (grade == "D-") {

        cout << "The numeric value is :" << 0.7 << endl;
    }

    else if (grade == "F") {

        cout << "The numeric value is :" << 0 << endl;
    }
   
    else {

        cout << ("Letter not in grading system");
    }
        return 0;



}

       
    
