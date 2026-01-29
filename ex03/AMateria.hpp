/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:07:53 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/01/29 10:05:12 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string _type;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria& src);
	AMateria& operator=(const AMateria& src);
	virtual ~AMateria();
	
	std::string const & getType() const; // return the materia type
	
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif