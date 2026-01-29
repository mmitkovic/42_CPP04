/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:02:47 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/01/20 14:02:48 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <cstddef>
#include <iostream>
#include <ostream>

Cat::Cat()
{
	std::cout << "[c]Cat" << std::endl;
	this->type = "Cat";
	this->brainPtr = new Brain();
}
Cat::Cat(const Cat& src) : Animal()
{
	std::cout << "[c][c]Cat" << std::endl;
	this->brainPtr = NULL; // avoiding garbage delete in cao
	*this = src;
}
Cat& Cat::operator=(const Cat& src)
{
	std::cout << "[c][a][o]Cat" << std::endl;
	if (this != &src)
	{
		this->type = src.type;

		Brain* tempPtr = new Brain(); //alloc new ptr
		std::cout << "---" << std::endl;
		*tempPtr = *src.brainPtr; //trigger Brain cao
		delete this->brainPtr; // delete cuurent str
		this->brainPtr = tempPtr;
	}
	return *this;
}
Cat::~Cat()
{
	std::cout << "~Cat" << std::endl;
	delete brainPtr;
}

void Cat::makeSound() const
{
	std::cout << this->type << " makes sound" << std::endl;
}

void Cat::setIdea(std::string idea, int pos) {
	this->brainPtr->setIdea(idea, pos);
}

std::string Cat::getIdea(int pos) const
{
	return this->brainPtr->getIdea(pos);
}
