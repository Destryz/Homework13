#include <iostream>
#include <math.h>
#include <string.h>


class Animal
{
public:
	virtual void Voice()
	{
		std::cout << "An animal voice here" << '\n';
	}
};

class Dog : public Animal
{
public:
	void Voice() override
	{
		std::cout << "Woof!" << '\n';
	}
};

class Cat : public Animal
{
public:
	void Voice() override
	{
		std::cout << "Meow!" << '\n';
	}
};

class Bird : public Animal
{
public:
	void Voice() override
	{
		std::cout << "Chik!" << '\n';
	}
};

int main()
{  
	Animal* p = new Dog;
	p->Voice();

	Animal* p1 = new Cat;
	p1->Voice();

	Animal* p2 = new Bird;
	p2->Voice();
}