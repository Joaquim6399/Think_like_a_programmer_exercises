
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	for(int i = 4; i > 0; i--)
	{
		for(int leftSpaces = abs(i - 4); leftSpaces > 0; leftSpaces--)
		{
			cout << " ";
		}

		for(int j = 0; j < i * 2; j++)
		{
			cout << "#";
		}


		for(int rightSpaces = abs(i - 4); rightSpaces > 0; rightSpaces--)
		{
			cout << " ";
		}


		cout << "\n";
	}

	return 0;
}
