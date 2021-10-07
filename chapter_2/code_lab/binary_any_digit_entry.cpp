
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Enter any binary number" << endl;

	char digit = cin.get();
	int number = digit - '0';
	
	digit = cin.get();

	while(digit != 10)
	{
		number = number * 2 + (digit - '0');

		digit = cin.get();
	}

	cout << "Decimal: " << number << endl;
	return 0;
}
