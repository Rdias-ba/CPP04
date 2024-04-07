/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 15:24:49 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/04/07 22:48:03 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) 
{
	//std::cout << "Ice default constructor called" << std::endl;
    this->_type = "ice";
}

Ice::~Ice(void) 
{
    //std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(const Ice &base) : AMateria(base._type)
{
    //std::cout << "Ice copy constructor called" << std::endl;
    *this = base;
}

Ice &Ice::operator=(const Ice &base) 
{
	//std::cout << "Ice assignment operator called" << std::endl;
	if (this != &base)
		this->_type = base._type;
	return (*this);
}

AMateria* Ice::clone() const
{
    //std::cout << "Ice clone called" << std::endl;
    return (new Ice(*this));
}

void Ice::use(ICharacter &target) 
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}