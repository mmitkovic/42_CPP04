/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:34:31 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/01/21 19:30:45 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "[c]MateriaSource" << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource& src)
{
	std::cout << "[c][c]MateriaSource" << std::endl;
	for (int i = 0; _copies[i] != NULL; ++i)
		this->_copies[i] = src._copies[i];
}
MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
	std::cout << "[c][a][o]MateriaSource" << std::endl;
	if (this != &src)
	{
		for (int i = 0; _copies[i] != NULL; ++i)
			this->_copies[i] = src._copies[i];
	}
	return *this;
}
MateriaSource::~MateriaSource()
{
	std::cout << "~MateriaSource" << std::endl;
	
}

void MateriaSource::learnMateria(AMateria* src)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_copies[i] == NULL)
		{
			_copies[i] = src;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_copies[i] && this->_copies[i]->getType() == type)
			return this->_copies[i]->clone();
	}
	return 0;
}