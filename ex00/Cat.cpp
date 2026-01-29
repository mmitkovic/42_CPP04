/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:04:23 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/01/20 14:04:24 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "[c]Cat" << std::endl;
	this->type = "Cat";
}
Cat::Cat(const Cat& src) : Animal()
{
	std::cout << "[c][c]Cat" << std::endl;
	*this = src;
}
Cat& Cat::operator=(const Cat& src)
{
	std::cout << "[c][a][o]Cat" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return *this;
}
Cat::~Cat()
{
	std::cout << "~Cat" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << this->type << " makes sound" << std::endl;
}
