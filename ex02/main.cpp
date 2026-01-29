/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:59:14 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/01/20 13:59:15 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include <ostream>

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Cat a;
	a.setIdea("Burn the world", 0);
	std::cout << "Cats idea: " << a.getIdea(0) << std::endl;
	Cat b(a);
	std::cout << "Cats b idea: " << b.getIdea(0) << std::endl;
	std::cout << "Meanwhile Cat b changes its mind..." << std::endl;
	b.setIdea("Just a half", 0);
	std::cout << "Cat a: " << a.getIdea(0) << std::endl;
	std::cout << "Cat b: " << b.getIdea(0) << std::endl;

	Dog dog;
	dog.setIdea("Happy thoughts", 0);
	std::cout << "Dogs idea: " << dog.getIdea(0) << std::endl;

	Animal* polyDog = new Dog();
	polyDog->setIdea("Poly Dog", 0);
	std::cout << "Dogs idea: " << polyDog->getIdea(0) << std::endl;
	
	int size = 4;
	Animal* animalArr[size];
	for (int i = 0; i < size; ++i)
	{
		if (i < size/2)
			animalArr[i] = new Dog;
		else
			animalArr[i] = new Cat;
	}
	std::cout << ": " << animalArr[0]->getType() << std::endl;
	std::cout << ": " << animalArr[2]->getType() << std::endl;
	for (int i = 0; i < size; ++i)
	{
		delete animalArr[i];
	}
	// Abstract class test
	//Animal *test = new Animal();

	delete j;
	delete i;

	return 0;
}
