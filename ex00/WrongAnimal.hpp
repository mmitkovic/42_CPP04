#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& src);
	WrongAnimal& operator=(const WrongAnimal& src);
	~WrongAnimal();

	void makeSound() const;
};

#endif
