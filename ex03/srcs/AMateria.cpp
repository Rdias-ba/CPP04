/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 14:29:01 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/04/07 21:36:34 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("")
{
    //std::cout << "* AMateria: materia is created *" << std::endl;
}

AMateria::AMateria(std::string const & type)  : _type(type)
{
    //std::cout << "AMateria " << this->_type << " created" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
    *this = src;
}

AMateria::~AMateria(void)
{
    //std::cout << "AMateria " << this->_type << " destroyed" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &materia)
{
	this->_type = materia._type;
	return (*this);
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void    AMateria::use(ICharacter& target)
{
    std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}