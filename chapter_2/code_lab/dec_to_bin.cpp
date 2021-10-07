
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int num = 0;
	
	cout << "Enter a decimal number: " << endl;

	cin >> num;
	while(num >= 1)
	{
		cout << num % 2;
		num = num / 2;

	}

	return 0;
}
