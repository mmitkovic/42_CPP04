/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:23:05 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/01/21 19:32:02 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"

Character::Character()
{
	std::cout << "[c]Character" << std::endl;
	for (int i = 0; _inventory[i] != NULL; ++i)
		this->_inventory[i] = NULL;
}
Character::Character(std::string name) : _name(name)
{
}
	
Character::Character(const Character& src)
{
	std::cout << "[c][c]Character" << std::endl;
	for (int i = 0; _inventory[i] != NULL; ++i)
		this->_inventory[i] = src._inventory[i];
}
Character& Character::operator=(const Character& src)
{
	std::cout << "[c][a][o]Character" << std::endl;
	if (this != &src)
	{
		for (int i = 0; _inventory[i] != NULL; ++i)
			this->_inventory[i] = src._inventory[i];
	}
	return *this;
}
Character::~Character()
{
	std::cout << "~Character" << std::endl;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) { this->_inventory[idx]->use(target); }