/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 15:29:18 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/29 15:38:21 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &base)
{
	std::cout << "Brain copy constructor called" << std::endl;
    *this = base;
}

Brain& Brain::operator=(const Brain &base)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &base)
		for (size_t i = 0; i < 100; i += 1) 
			this->ideas[i] = base.ideas[i];
	return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}