
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//Find the highest power of two smaller of equal to a n
int main()
{
	int n = 0;
	
	cout << "Enter a number: " << endl;

	cin >> n;

	int powersOfTwo = 1;

	while(true)
	{
		if(n < powersOfTwo)
		{
			if(n < powersOfTwo)
			{
				powersOfTwo /= 2;
				break;
			}
		}else
		{
			powersOfTwo *= 2;
		}

		
	}

	cout << "Highest power: " << powersOfTwo << endl;
	return 0;
}
