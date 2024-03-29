/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:09:40 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/29 14:10:20 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	this->setType("WrongCat");
	std::cout << this->type << " Default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type): WrongAnimal(type)
{
	std::cout << this->type << " String constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &base): WrongAnimal(base)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
    *this = base;
}

WrongCat& WrongCat::operator=(const WrongCat &base)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &base)
		this->type = base.type;
	return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Mew Mew !" << std::endl;
}