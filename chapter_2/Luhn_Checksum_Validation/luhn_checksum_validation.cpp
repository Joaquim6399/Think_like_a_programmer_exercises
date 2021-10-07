
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool toCheck();
int charToInt(char num);
int doubleDigit(int num);


bool check = true;

int main()
{
	char num;
	
	int result = 0;
	
	num = cin.get();

	int evenResult = 0;
	int oddResult = 0;
	int position = 1;

	while(num != 10)
	{
		int digit = charToInt(num);

		if(position%2 == 0)
		{
			oddResult += doubleDigit(digit);
			evenResult += digit;
		} else
		{
			oddResult += digit;
			evenResult += doubleDigit(digit);
		}

		num = cin.get();
		position++;
	}	

	if((position-1)%2 == 0)
	{
		cout << "result: " << evenResult << endl;	
		result = evenResult;
	}else
	{
		cout << "result: " << oddResult << endl;
		result = oddResult;
	}

	if(result % 10 == 0)
	{
		cout << "Valid" << endl;
		return 0;
	}

	cout << "Invalid" << endl;
	return 0;

}

int doubleDigit(int num)
{
	num *= 2;
			
	if((num / 10) > 0)
	{
		int temp = 0;
		temp += num / 10;
		temp += num % 10;
		
		num = temp;
	}

	return num;
}

bool toCheck()
{
	if(check == true)
	{
		check = false;
		return false;
	}
	
	check = true;
	return check;
}

int charToInt(char num)
{
	return num - '0';
}
