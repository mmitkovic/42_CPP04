/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:58:39 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/01/29 10:06:07 by mmitkovi         ###   ########.fr       */
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

	virtual void makeSound() const = 0;
	std::string getType() const;

	virtual void setIdea(std::string idea, int pos);
	virtual std::string getIdea(int) const { return ""; }
};

#endif
