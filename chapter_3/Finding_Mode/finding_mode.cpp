
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	const int ARRAY_SIZE = 10;
	int intArray[ARRAY_SIZE] = {1,2,3,3,5,6,9,9,9,10};
	

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
	
cout << "Mode is value " << intArray[position] << " that is in position " << position << " in the integer array." << endl;
	return 0;
}
