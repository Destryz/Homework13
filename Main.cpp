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
		std::cout << "Tweet!" << '\n';
	}
};

int main()
{  
	std::cout << "Input array size";
	size_t size;
	std::cin>>size;
	Animal** animals = new Animal * [size] {}; 

	for (size_t i = 0; i < size; ++i) {
		if (i % 3 == 0) {
			animals[i] = new Bird;
		}
		else if(i % 2 == 0) {
			animals[i] = new Cat;
		}
		else {
			animals[i] = new Dog;
		}
	}

	for (size_t i = 0; i < size; ++i) {
		animals[i]->Voice();
	}

	for (size_t i = 0; i < size; ++i) {
		delete animals[i];
	}
	delete[] animals;
}