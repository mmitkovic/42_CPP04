#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain& src);
	Brain& operator=(const Brain& src);
	~Brain();

	void setIdea(std::string i, int pos)
	{
		this->ideas[pos] = i;
	}
	std::string getIdea(int pos)
	{
		return this->ideas[pos];
	}
	
};

#endif
