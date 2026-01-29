/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitkovi <mmitkovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:58:44 by mmitkovi          #+#    #+#             */
/*   Updated: 2026/01/20 13:58:45 by mmitkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "[c]Brain" << std::endl;
}
Brain::Brain(const Brain& src)
{
	std::cout << "[c][c]Brain" << std::endl;
	*this = src;
}
Brain& Brain::operator=(const Brain& src)
{
	std::cout << "[c][a][o]Brain" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = src.ideas[i];
	}
	return *this;
}
Brain::~Brain()
{
	std::cout << "~Brain" << std::endl;
}

void Brain::setIdea(std::string i, int pos)
	{
		this->ideas[pos] = i;
	}
std::string Brain::getIdea(int pos)
{
	return this->ideas[pos];
}
