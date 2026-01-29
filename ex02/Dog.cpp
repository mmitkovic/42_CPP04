/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:59:04 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/01/20 13:59:05 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "[c]Dog" << std::endl;
	this->type = "Dog";
	this->brainPtr = new Brain();
}
Dog::Dog(const Dog& src) : Animal()
{
	std::cout << "[c][c]Dog" <<std::endl;
	this->brainPtr = NULL;
	*this = src;
}
Dog& Dog::operator=(const Dog& src)
{
	std::cout << "[c][a][o]Dog" << std::endl;
	if (this != &src)
	{
		this->type = src.type;

		Brain* tempPtr = new Brain();
		*tempPtr = *src.brainPtr;

		delete this->brainPtr;

		this->brainPtr = tempPtr;
	}
	return *this;
}
Dog::~Dog()
{
	std::cout << "~Dog" << std::endl;
	delete brainPtr;
}

void Dog::makeSound() const
{
	std::cout << this->type << " makes sound" << std::endl;
}

void Dog::setIdea(std::string idea, int pos)
{
	this->brainPtr->setIdea(idea, pos);
}

std::string Dog::getIdea(int pos) const
{
	return this->brainPtr->getIdea(pos);
}
