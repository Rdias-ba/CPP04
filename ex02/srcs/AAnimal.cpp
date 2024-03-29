/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:06:08 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/29 13:31:17 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): type("AAnimal")
{
	std::cout << this->type << " Default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type): type(type)
{
	std::cout << this->type << " String constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &base)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
    *this = base;
}

AAnimal& AAnimal::operator=(const AAnimal &base)
{
	std::cout << "AAnimal assignment operator called" << std::endl;
	if (this != &base)
		this->type = base.type;
	return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return this->type;
}

void AAnimal::setType(std::string type)
{
	this->type = type;
}

void AAnimal::makeSound(void) const
{
	std::cout << "AAnimal makeSound() called" << std::endl;
}