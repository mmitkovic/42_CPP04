/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:02:51 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/01/20 14:02:52 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* brainPtr;
public:
	Cat();
	Cat(const Cat& src);
	Cat& operator=(const Cat& src);
	~Cat();

	virtual void makeSound() const;

	void setIdea(std::string idea, int pos);
	std::string getIdea(int pos) const;
};

#endif
