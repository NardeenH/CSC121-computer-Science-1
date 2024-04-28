// Assignment3EX2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

int main()
{
	cout<< "GOT HERE" << endl;
	cout << "\x1b[4mReport to the media \x1b[0m" << endl;
	std::cout << "\e[1mBold\e[0m non-bold" << std::endl; // displays Bold in bold
	string name, city;
	char choise = 'y';
	double judgeScore[5];
	double dagreeDifficulty;
	double overAllscore = 0;
	double hightScore = 0;
	double lowScore = 0;
	int totalDiver = 0;
	double totalScore = 0;
	double overAvg = 0;
	double averageDrive = 0;

	do {
		cout << "Enter the diver's name:";
		getline(cin, name, '\n');
		cout << "Enter the diver's city: ";
		getline(cin, city, '\n');

		for (int i = 0; i < 5; i++) {

			cout << "Enter the score given by judge#" << i + 1 << ":";
			cin >> judgeScore[i];
			while (judgeScore[i] < 0 || judgeScore[i] > 10)
			{
				cout << "Invalid score- Please reenter (Valid Range 0 - 10)" << endl;
				cout << "Enter the score given by judge#" << i + 1 << ":";
				cin.ignore(10000, '\n');
				cin >> judgeScore[i];
			}
			if (i == 0)
				lowScore = judgeScore[i];
			if (hightScore < judgeScore[i])
				hightScore = judgeScore[i];
			if (lowScore > judgeScore[i])
				lowScore = judgeScore[i];
			overAllscore += judgeScore[i];

		}


		overAllscore -= hightScore;
		overAllscore -= lowScore;
		overAllscore /= 3;

		cout << "What was the degree of difficulty?";
		cin >> dagreeDifficulty;
		while (dagreeDifficulty < 1 || dagreeDifficulty > 1.67)
		{

			cout << "Invalid degree of difficulty - Please reenter(Valid Range: 1 - 1.67) " << endl;
			cout << "What was the degree of difficulty? ";
			cin >> dagreeDifficulty;
		}

		totalScore = dagreeDifficulty * overAllscore;
		cout << "\nDiver:" << name << " City:" << city << endl;
		cout << "Overall score was: " << totalScore << endl;
		cout << "Do you want to process another diver (Y/N)?";
		cin >> choise;
		cin.ignore();
		totalDiver++;
		overAvg += totalScore;
	} while (choise == 'y');
	averageDrive = overAvg / totalDiver;
	//cout << "\n \x1b[EVENT SUMMARY\x1b[0m" << endl;
	cout << "\n \x1b[mEVENT SUMMARY\x1b[0m" << endl;
	cout << "Number of divers participating: " << totalDiver << endl;
	cout << "Average score of all divers: " << averageDrive << endl;

	return 0;

}