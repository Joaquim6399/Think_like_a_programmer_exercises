


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	for(int i = 1; i <= 4; i++)
	{
		for(int left = 0; left < (8- (i*2))/2; left++)
		{
			cout << " ";
		}

		for(int j = 0; j < (i*2); j++)
		{
			cout << "#";
		}
		
		for(int left = 0; left < (8- (i*2))/2; left++)
		{
			cout << " ";
		}
		cout << "\n";
	
		
	}
	for(int i = 4; i > 0; i--)
	{
		for(int left = 0; left < (8- (i*2))/2; left++)
		{
			cout << " ";
		}

		for(int j = 0; j < (i*2); j++)
		{
			cout << "#";
		}
		
		for(int left = 0; left < (8- (i*2))/2; left++)
		{
			cout << " ";
		}
		cout << "\n";
	
		
	}





	return 0;
}
