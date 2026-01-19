#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	std::cout << "[c]WrongCat" << std::endl;
	this->type = "Wrong Cat";
}
WrongCat::WrongCat(const WrongCat& src) : WrongAnimal()
{
	std::cout << "[c][c]WrongCat" << std::endl;
	*this = src;
}
WrongCat& WrongCat::operator=(const WrongCat& src)
{
	std::cout << "[c][a][o]WrongCat" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return *this;
}
WrongCat::~WrongCat()
{
	std::cout << "~WrongCat" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "---" << std::endl;
	std::cout << this->type << " make sound" << std::endl;
}
