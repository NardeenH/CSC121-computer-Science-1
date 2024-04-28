

#include <iostream>
using namespace std;

int category[9];
double salary;



void calcSallary(int cost) {
	salary = cost * 9 / 100;
	salary += 200;

	if (salary >= 200 && salary <= 299)
		category[0]++;
	if (salary >= 300 && salary <= 399)
		category[1]++;
	if (salary >= 400 && salary <= 499)
		category[2]++;
	if (salary >= 500 && salary <= 599)
		category[3]++;
	if (salary >= 600 && salary <= 699)
		category[4]++;
	if (salary >= 700 && salary <= 799)
		category[5]++;
	if (salary >= 800 && salary <= 899)
		category[6]++;
	if (salary >= 900 && salary <= 999)
		category[7]++;
	if (salary >= 1000)
		category[8]++;

}
int main() {
	int grossSales = 0;
	int index;
	for (index = 0; index < 21; index++) {
		cout << "Enter gross sales for salesperson#" << index << ":";
		cin >> grossSales;
		calcSallary(grossSales);
	}
	
	cout << "\n \x1b[4mCount of employees in each salary range:\x1b[0m" << endl;
	
	cout << "The number of salespeople earning in range $200-$299:" << category[0] << endl;
	cout << "The number of salespeople earning in range $300-$399:" << category[1] << endl;
	cout << "The number of salespeople earning in range $400-$499:" << category[2] << endl;
	cout << "The number of salespeople earning in range $500-$599:" << category[3] << endl;
	cout << "The number of salespeople earning in range $600-$699:" << category[4] << endl;
	cout << "The number of salespeople earning in range $700-$799:" << category[5] << endl;
	cout << "The number of salespeople earning in range $800-$899:" << category[6] << endl;
	cout << "The number of salespeople earning in range $900-$999:" << category[7] << endl;
	cout << "The number of salespeople earning in range $1000 and above:" << category[8] << endl;
		return 0;
}