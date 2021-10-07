

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	for(int i = 0; i < 4; i++)
	{
		for(int left = 0; left < i; left++)
		{
			cout << " ";	
		}

		for(int j = 0; j < ((i+1)*2)/2; j++)
		{
			cout << "#";
		}
		
		//middle spaces
		if(i < 3)
		{
			for(int middle = 0; middle < (((i + 1) * -1) + 4) * 4; middle ++)
			{
				cout << " ";
			}
		}

		for(int j = 0; j < ((i+1)*2)/2; j++)
		{
			cout << "#";
		}


		cout << "\n";
	}

	for(int i = 4; i > 0; i--)
	{

		for(int left = 0; left < i - 1; left++)
		{
			cout << " ";	
		}
		
		for(int j = 0; j < (i*2)/2; j++)
		{
			cout << "#";
		}
		
		//Middle spaces
		if(i < 4)
		{
			for(int middle = 0; middle < ((i * -1) + 4) * 4; middle ++)
			{
				cout << " ";
			}
		}

		for(int j = 0; j < (i*2)/2; j++)
		{
			cout << "#";
		}
		
		cout << "\n";
	}
	return 0;
}
