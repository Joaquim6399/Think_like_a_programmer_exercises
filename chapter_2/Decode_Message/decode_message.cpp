


#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int charToInt(char c)
{
	return c - '0';
}

int main()
{
	char ALPHABETUpper[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}; 
									
		char ALPHABETLower[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

				
		char PUNCTUATION[] = {'!', '?', ',', '.', ' ', ';', '"', '*'};

	cout << "Enter a number: " << endl;

	//cin char
	// add char to result
	// if next char end of line your done
	// if not multiply by 10 and add the next
	int result = 0;
	char c = cin.get();
	
	result += charToInt(c);
	
	int mode = 1; /* 1 == Uppercase, 2 == lowercase, 3 == Punctuation */

	while(true)
	{
		char c = cin.get();
		if(c == 10)
		{
			//cout << "break with: "<< result << endl;
			//if there is a switch in the last number the program will break
			int value = 0;

			switch(mode)
			{
				case 1:
					value = result % 27;
					break;
				case 2:
					value = result % 27;
					break;
				case 3:
					value = result % 9;
					break;	
			}

			switch(mode)
			{
				case 1:
					cout << ALPHABETUpper[(value % 27) - 1];
					break;
				case 2:
					cout << ALPHABETLower[(value % 27) - 1];
					break;
				case 3:
					cout << PUNCTUATION[(value % 9) - 1];
					break;
			}
						

			break;
		} else if( c == 44)
		{
						//cout << result << endl;
			int value = 0;

			switch(mode)
			{
				case 1:
					value = result % 27;
					break;
				case 2:
					value = result % 27;
					break;
				case 3:
					value = result % 9;
					break;	
			}

			if(value == 0)
			{
				if(mode == 1)
				{
					mode = 2;
				} else if(mode == 2)
				{
					mode = 3;
				} else 
				{
					mode = 1;
				}

				result = 0;
				continue;
			}
			
			switch(mode)
			{
				case 1:
					cout << ALPHABETUpper[(value % 27) - 1];
					break;
				case 2:
					cout << ALPHABETLower[(value % 27) - 1];
					break;
				case 3:
					cout << PUNCTUATION[(value % 9) - 1];
					break;
			}


			result = 0;

		}	
		else
		{			
			result = (result * 10) + charToInt(c);

		}
	}

	cout << endl << endl;
	
	

	

	return 0;
}
