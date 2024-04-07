/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 14:52:44 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/04/07 22:48:50 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) 
{
	//std::cout << "Cure default constructor called" << std::endl;
    this->_type = "cure";
}

Cure::~Cure(void) 
{
    //std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(const Cure &base) : AMateria(base._type)
{
    //std::cout << "Cure copy constructor called" << std::endl;
    *this = base;
}

Cure &Cure::operator=(const Cure &base)
{
    //std::cout << "Cure assignment operator called" << std::endl;
	if (this != &base)
		this->_type = base._type;
	return (*this);
}

AMateria* Cure::clone() const
{
    //std::cout << "Cure clone called" << std::endl;
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}