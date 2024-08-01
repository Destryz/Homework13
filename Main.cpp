#include <iostream>
#include "Helpers.h"
#include <string>

void FindOddNumbers(int Limit, bool IsOdd)
{
	int i;
	if (!IsOdd)
	{
		i = 2;
		std::cout << "Even numbers in a given limit\n";
	}
	else
	{
		i = 1;
		std::cout << "Odd numbers in a given limit\n";

	}

	for (i; i <= Limit; i += 2)
	{
		std::cout << i << std::endl;
	}

}

int main()
{  
	int n;
	bool IsOdd;
	
	std::cout << "input Limit\n";
	std::cin >> n;
	std::cout << "Is odd? (0/1)\n";
	std::cin >> IsOdd;

	FindOddNumbers(n, IsOdd);

	/*float a, b;

	std::cout << "input a: ";
	std::cin >> a;
	std::cout << "input b: ";
	std::cin >> b;

	double result = squaresum(a, b);
	std::cout << "The square of the sum  = " << result << std::endl;

	std::string str;
	str = "Hello Skillbox";

	std::cout << "String value is '" << str << "'. String length is '" << str.length() << "'. First symbol is '" << str[0] << "'. Last symbol is '" << str[str.length() - 1] << "'."; */

}