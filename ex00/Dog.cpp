#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "[c]Dog" << std::endl;
	this->type = "Dog";
}
Dog::Dog(const Dog& src) : Animal()
{
	std::cout << "[c][c]Dog" <<std::endl;
	*this = src;
}
Dog& Dog::operator=(const Dog& src)
{
	std::cout << "[c][a][o]Dog" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return *this;
}
Dog::~Dog()
{
	std::cout << "~Dog" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << this->type << " makes sound" << std::endl;
}
