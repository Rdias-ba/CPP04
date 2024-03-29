/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:43:29 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/29 16:57:24 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): AAnimal()
{
	this->setType("Cat");
	this->brain = new Brain();
	std::cout << this->type << " Default constructor called" << std::endl;
}

Cat::Cat(std::string type): AAnimal(type)
{
	this->brain = new Brain();
	std::cout << this->type << " String constructor called" << std::endl;
}

Cat::Cat(const Cat &base): AAnimal(base)
{
	std::cout << "Cat copy constructor called" << std::endl;
    this->type = base.type;
	this->brain = new Brain(*base.brain);
}

Cat& Cat::operator=(const Cat &base)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &base)
	{
		this->type = base.type;
		this->brain = new Brain(*base.brain);
	}
	return *this;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Mew Mew !" << std::endl;
}