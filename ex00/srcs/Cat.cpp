/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:43:29 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/29 13:52:16 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->setType("Cat");
	std::cout << this->type << " Default constructor called" << std::endl;
}

Cat::Cat(std::string type): Animal(type)
{
	std::cout << this->type << " String constructor called" << std::endl;
}

Cat::Cat(const Cat &base): Animal(base)
{
	std::cout << "Cat copy constructor called" << std::endl;
    *this = base;
}

Cat& Cat::operator=(const Cat &base)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &base)
		this->type = base.type;
	return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Mew Mew !" << std::endl;
}