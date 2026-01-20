#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* brainPtr;
public:
	Dog();
	Dog(const Dog& src);
	Dog& operator=(const Dog& src);
	~Dog();

	virtual void makeSound() const;
	
	void setIdea(std::string idea, int pos);
	std::string getIdea(int pos) const;
};
#endif
