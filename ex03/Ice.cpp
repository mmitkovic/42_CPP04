/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:18:45 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/01/21 19:40:19 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "[c]Ice" << std::endl;
}
Ice::Ice(const Ice& src) : AMateria(src)
{
	std::cout << "[c][c]Ice" << std::endl;
	this->_type = src._type;
}

Ice& Ice::operator=(const Ice& src)
{
	std::cout << "[c][a][o]Ice" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}
Ice::~Ice()
{
	std::cout << "~Ice" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}