/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:07:16 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/01/21 19:21:11 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <iostream>
#include <string>

int main()
{
	// // IMateriaSource* src = new MateriaSource();
	// // src->learnMateria(new Ice());
	// // src->learnMateria(new Cure());
	// // ICharacter* me = new Character("me");
	// // AMateria* tmp;
	// // tmp = src->createMateria("ice");
	// // me->equip(tmp);
	// // tmp = src->createMateria("cure");
	// // me->equip(tmp);
	// // ICharacter* bob = new Character("bob");
	// // me->use(0, *bob);
	// // me->use(1, *bob);
	// // delete bob;
	// // delete me;
	// // delete src;
	// // return 0;


	// // Character milos = new Character("milos");

	// Cure *cure = new Cure();
	// std::cout << "Type: " << cure->getType() << std::endl;

	// AMateria *cure2 = cure->clone();
	// std::cout << "Type: " << cure2->getType() << std::endl;

	// AMateria* iceA = new Cure(cure2);

	
	// (void)iceA;
	// // iceA->use();
	
	
	
	// // char Bob
	// // char Alice = copy(Bob)

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;


	
	return 0;
}