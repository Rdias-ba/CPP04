/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 22:20:58 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/04/07 22:32:10 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    //std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < MAX_SIZE; i++)
        this->_materia[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource &base)
{
    //std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < MAX_SIZE; i++)
        if (this->_materia[i] != NULL)
		{
            delete this->_materia[i];
			this->_materia[i] = NULL;
		}
    *this = base;
}

MateriaSource::~MateriaSource(void)
{
    //std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < MAX_SIZE; i++)
        if (this->_materia[i] != NULL)
		{
            delete this->_materia[i];
			this->_materia[i] = NULL;
		}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &base)
{
    //std::cout << "Character assignment operator called" << std::endl;
    if (this != &base)
	{
        for (int i = 0; i < MAX_SIZE; i++)
		{
            if (this->_materia[i] != NULL)
                delete this->_materia[i];
            this->_materia[i] = base._materia[i]->clone();
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
    std::cout << "MateriaSource learnMateria called" << std::endl;
    for (int i = 0; i < MAX_SIZE; i++)
	{
		if (!this->_materia[i])
		{
			this->_materia[i] = materia;
			std::cout << "Materia" << materia->getType() << "learned !" << std::endl;
			return ;
		}
	}
	std::cout << "Couldn't learn materia" << std::endl;
	delete materia;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    std::cout << "MateriaSource createMateria called" << std::endl;
    for (int i = 0; i < MAX_SIZE; i++)
	{
        if (this->_materia[i] && this->_materia[i]->getType() == type)
            return (this->_materia[i]->clone());
	}
	std::cout << "Materia has not been learned yet" << std::endl;
    return (0);
}