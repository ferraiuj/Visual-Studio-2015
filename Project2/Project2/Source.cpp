#include <iostream>
#include <string>

using namespace std;

int value(char roman)
{
	switch (roman)
	{
	case 'I':return 1;
	case 'V':return 5;
	case 'X':return 10;
	case 'L':return 50;
	case 'C':return 100;
	case 'D':return 500;
	case 'M':return 1000;

	}

}
	int getdec(const std::string& input);
	{
		int sum = 0; char prev = '%';
		for (int i = (input.length() - 1); i >= 0; i--)
		{
			if (value(input[i]) < sum && (input[i] != prev))
			{
				sum -= value(input[]);
				prev = input[i];
			}
			else
			{
				sum += value(input[i]);
				prev = input[i];
			}
		}
		return sum;
	}