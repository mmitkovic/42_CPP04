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
	

	delete j;
	delete i;

	return 0;
}
