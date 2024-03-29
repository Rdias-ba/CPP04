/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:53:49 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/29 16:31:47 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->setType("Dog");
	this->brain = new Brain();
	std::cout << this->type << " Default constructor called" << std::endl;
}

Dog::Dog(std::string type): Animal(type)
{
	this->brain = new Brain();
	std::cout << this->type << " String constructor called" << std::endl;
}

Dog::Dog(const Dog &base): Animal(base)
{
	std::cout << "Dog copy constructor called" << std::endl;
    this->type = base.type;
	this->brain = new Brain(*base.brain);
}

Dog& Dog::operator=(const Dog &base)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &base)
	{
		this->type = base.type;
		this->brain = new Brain(*base.brain);
	}
	return *this;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof Woof !" << std::endl;
}