/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:02:33 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/01/29 10:07:59 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	virtual void makeSound() const;
	std::string getType() const;

	virtual void setIdea(std::string idea, int pos);
	virtual std::string getIdea(int) const { return ""; }
};

#endif
