/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:59:10 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/01/20 13:59:11 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
