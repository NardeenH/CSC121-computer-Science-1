// Assignment2, Exercise2.cpp : 
//Write a program that inputs the amount of the purchase and calculates the shipping charge based on the following table:

#include <iostream>
using namespace std;

int main()
{
	char b[1024]; // open space ın memmory
	double amount;
	cout << "Please enter the amount of your purchase:";
	cin >> amount;
	double charge = 0;
	if (amount > 0 && amount <= 250) {
		charge = 5.00;
	}
	else if (amount > 250 && amount <= 500) {
		charge = 8.00;
	}
	else if (amount > 500 && amount <= 1000) {
		charge = 10.00;
	}
	else if (amount > 1000 && amount <= 5000) {
		charge = 15.00;
	}
	else
		charge = 20.00;	
	sprintf_s(b, "he shipping charge on a purchase of $%0.2f Is $%0.2f ", amount, charge);
	cout << b << endl;

	return 0;
}


