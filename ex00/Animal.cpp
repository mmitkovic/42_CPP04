/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:04:13 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/01/20 14:04:14 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void Animal::makeSound() const
{
	std::cout << this->type << " makes sound" << std::endl;
}

std::string Animal::getType() const { return this->type; }
