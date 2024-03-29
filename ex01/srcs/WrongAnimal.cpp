/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:58:48 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/29 14:00:32 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << this->type << " Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type)
{
	std::cout << this->type << " String constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &base)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = base;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &base)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this != &base)
		this->type = base.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal makeSound() called" << std::endl;
}