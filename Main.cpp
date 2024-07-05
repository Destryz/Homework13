#include <iostream>
#include "Helpers.h"

int main()
{
	float a, b;

	std::cout << "input a: ";
	std::cin >> a;
	std::cout << "input b: ";
	std::cin >> b;

	double result = squaresum(a, b);

	std::cout << "The square of the sum  = " << result << std::endl;
}