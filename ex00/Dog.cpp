/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:04:32 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/01/20 14:04:33 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
