/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:17:17 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/01/21 14:32:15 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "[c]Cure" << std::endl;
}
Cure::Cure(const Cure& src) : AMateria(src)
{
	std::cout << "[c][c]Cure" << std::endl;
	this->_type = src._type;
}
Cure& Cure::operator=(const Cure& src)
{
	std::cout << "[c][a][o]Cure" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}
Cure::~Cure()
{
	std::cout << "~Cure" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}