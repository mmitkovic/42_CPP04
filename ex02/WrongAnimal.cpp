#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("Wrong Animal")
{
	std::cout << "[c]WrongAnimal" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << "[c][c]WrongAnimal" << std::endl;
	*this = src;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	std::cout << "[c][a][o]WrongAnimail" << std::endl;
	if ( this != &src )
	{
		this->type = src.type;
	}
	return *this;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "~WrongAnimal" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "in Wrong Animal" << std::endl;
}
