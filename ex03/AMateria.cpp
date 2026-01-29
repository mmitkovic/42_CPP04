/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:41:47 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/01/29 10:05:34 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria() : _type("Default")
{
	std::cout << "[c]AMateria" << std::endl;
}
AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "[p][c]AMateria" << std::endl;
}
AMateria::AMateria(const AMateria& src)
{
	(void)src;
}

AMateria& AMateria::operator=(const AMateria& src)
{
	std::cout << "[c][a][o]AMateria" << std::endl;
	if (this != &src)
		(void)src._type;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "~AMateria" << std::endl;	
}

std::string const & AMateria::getType() const { return this->_type; }

void AMateria::use(ICharacter& target)
{
	(void)target;
}