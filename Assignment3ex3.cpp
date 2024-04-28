# include <iostream>
# include <string>
# include <iomanip>
using namespace std;
//function prototypes
int Todigit(char& ch);
int ReadDial();
void AcknowledgeCall();
char d[8];
int index;
// function main
int main()
{
	

	int result = 0;

	do
	{
		result = ReadDial();

	} while (result != -1);
	system("pause");
	return 0;
}

int ReadDial()
{

	int returnValue;
	cout << "Enter a phone number (Q to quit): ";
	cin >> d[0];
	if (d[0] == 'Q')
		return -1;
	for (index = 1; index < 8; index++) {
		cin >> d[index];
	}

	for (index = 0; index < 8; index++) {
		if (index == 3)
			continue;
		d[index] = Todigit(d[index]);
		if (d[index] == -1) {
			cout << "Error- An invalid character was entered" << endl;
			return 0;
		}
	}

	if (d[3] != '-')
	{
		cout << "Error- Hyphen is not in the correct position" << endl;
		return 0;
	}

	if (d[0] == '0')
	{
		cout << "Error-Phone number cannot begin with 0" << endl;
		return 0;
	}
	//invalid character
	if (d[0] == '5' && d[1] == '5' && d[2] == '5')
	{
		cout << "Error-Phone number cannot begin with 555" << endl;
		return 0;
	}

	AcknowledgeCall();
	return 0;
}

int Todigit(char& d)
{
	
	d = toupper(d);
	switch (d)
	{
	case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9': break;
	case 'A': case 'B': case 'C':
		d = '2'; break;
	case 'D': case 'E': case 'F':
		d = '3'; break;
	case 'G': case 'H': case 'I':
		d = '4'; break;
	case 'J': case 'K': case 'L':
		d = '5'; break;
	case 'M': case 'N': case 'O':
		d = '6'; break;
	case 'P': case 'Q': case 'R': case 'S':
		d = '7'; break;
	case 'T': case 'U': case 'V':
		d = '8'; break;
	case 'W': case 'X': case 'Y': case 'Z':
		d = '9'; break;
	default: return -1;
	}
	return d;
}
void AcknowledgeCall()
{
	cout << "Phone Number Dialed: ";
	for (index = 0; index < 8; index++) {
		cout << d[index];
	}
	cout << endl;
}