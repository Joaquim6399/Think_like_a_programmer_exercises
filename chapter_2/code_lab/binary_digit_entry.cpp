
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//4 digit binary number

int main()
{
	cout << "Enter a 4 digit binary number" << endl;

	char digit;
	
	digit = cin.get();

	int powersOfTwo = 8;
	int result = 0;

	while(digit != 10)
	{
		result += (digit - '0') * powersOfTwo;
		powersOfTwo /= 2;		

		digit = cin.get();
	}

	cout << "decimal equivalent: " << result << endl;

	return 0;
}
