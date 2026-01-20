#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Generic Animal Type")
{
	std::cout << "[c]Animal" << std::endl;
}
Animal::Animal(const Animal& src)
{
	std::cout << "[c][c]Animal" << std::endl;
	*this = src;
}
Animal& Animal::operator=(const Animal& src)
{
	std::cout << "[c][a][o]Animl" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return *this;
}
Animal::~Animal()
{
	std::cout << "~Animal" << std::endl;
}

/*
void Animal::makeSound() const
{
	std::cout << this->type << " makes sound" << std::endl;
}*/

std::string Animal::getType() const { return this->type; }


void Animal::setIdea(std::string idea, int pos) { 
	(void)idea; 
	(void)pos;
}
