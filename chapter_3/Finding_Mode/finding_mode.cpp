
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	const int ARRAY_SIZE = 12;
	int intArray[ARRAY_SIZE] = {4,7,3,8,9,7,3,9,9,3,3,10};
	

	int max = 0;
	int count = 0;
	int position = 0;

	for(int i = 0; i < ARRAY_SIZE; i++)
	{
		for(int j = 0; j < ARRAY_SIZE; j++)
		{
			if(j == i)
			{
				continue;
			}
			
			if(intArray[j] == intArray[i])
			{
				count ++;
			}
		}

		if(count > max)
		{
			max = count;
			position = i;
		}
	}
	
cout << "Mode is value " << intArray[position] << endl;
	return 0;
}
