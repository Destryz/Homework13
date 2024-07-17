#include <iostream>
#include "Helpers.h"
#include <string>

int main()
{
	/*float a, b;

	std::cout << "input a: ";
	std::cin >> a;
	std::cout << "input b: ";
	std::cin >> b;

	double result = squaresum(a, b);
	std::cout << "The square of the sum  = " << result << std::endl;*/

	std::string str;
	str = "Hello Skillbox";

	std::cout << "String value is '" << str << "'. String length is '" << str.length() << "'. First symbol is '" << str[0] << "'. Last symbol is '" << str[str.length() - 1] << "'.";

}