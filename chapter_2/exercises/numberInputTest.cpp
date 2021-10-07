
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char num = 0;

	while(num != 10)
	{
		num = cin.get();

		cout << int(num) << " ";
	}

	return 0;
}
