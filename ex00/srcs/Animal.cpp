/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:06:08 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/28 14:06:02 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << this->type << " Default constructor called" << std::endl;
}

Animal::Animal(std::string type): type(type)
{
	std::cout << this->type << " String constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &base)
{
	std::cout << "Animal copy constructor called" << std::endl;
    *this = base;
}

Animal& Animal::operator=(const Animal &base)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &base)
		this->type = base.type;
	return *this;
}