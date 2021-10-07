
#include <iostream>

using std::cin;
using std::cout;

int main()
{
	for(int i = 1; i <= 7; i++)
	{
		for(int j = 0;j < 4 - abs(4 - i) ;j++)
		{
			cout << "#";
		}

		cout << "\n";
	}	
	return 0;
}
