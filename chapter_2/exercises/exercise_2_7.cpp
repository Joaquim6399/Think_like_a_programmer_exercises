
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number = 0;

	cin >> number;
	
	int value = number;

	/*
	while(value / 16 > 16)
	{
		value = value / 16
	}
	*/

	if (value > 9)
	{
		switch(value) {
			case 10:
				cout << "A";
				break;

			case 11:
				cout << "B";
				break;

			case 12:
				cout << "C";
				break;

			case 13:
				cout << "D";
				break;

			case 14:
				cout << "E";
				break;
	
			case 15:
				cout << "F";
				break;

		}
	} else
	{
		cout << number / 16;
	}
	cout << number % 16;

	return 0;
}
