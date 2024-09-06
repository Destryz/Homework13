#include <iostream>
#include <math.h>


class Vector
{
public:
	Vector() : x(0), y(0), z(0)
	{}
	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}
	void Show()
	{
		std::cout << '\n' << "The lenght of vector is " << sqrt( std::pow(x,2) + std::pow(y, 2) + std::pow(z, 2));
	}
private:
	double x;
	double y;
	double z;
};

int main()
{  
	double x, y, z;
	std::cout << "input X value ";
	std::cin >> x;
	std::cout << "input Y value ";
	std::cin >> y;
	std::cout << "input Z value ";
	std::cin >> z;

	Vector v(x, y, z);
	v.Show();
}