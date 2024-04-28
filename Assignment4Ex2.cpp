//Use a one-dimensional array to solve the following problem: A company pays its salespeople on a commission basis. The salespeople each receive $200 per week plus 9 percent of their gross sales for that week. For example, a salesperson who grosses $5000 in sales in a week receives $200 plus 9 percent of $5000, or a total of $650. Write a program (using an array of counters), for a company with 20 employees, that determines how many of the salespeople earned salaries in each of the following ranges (assume that each salesperson's salary is truncated to an integer amount): a) $200-299 b) $300-399 c) $400-499 d) $500-599 e) $600-699 f) $700-799 g) $800-899 h) $900-999 i) $1000 and over.

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
