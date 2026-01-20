#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal& src);
	Animal& operator=(const Animal& src);
	virtual ~Animal();

	virtual void makeSound() const = 0;
	std::string getType() const;

	virtual void setIdea(std::string idea, int pos);
	virtual std::string getIdea(int /*pos*/) const { return ""; }
};

#endif
