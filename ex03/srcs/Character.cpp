/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 22:21:16 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/04/07 22:27:12 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("")
{
	//std::cout << "Character " << this->_name << " created" << std::endl;
    for (int i = 0; i < INVENTORY_SIZE; i++)
	{
        this->_inventory[i] = NULL;
	}
}

Character::Character(std::string const &name) : _name(name)
{
	//std::cout << "Character " << this->_name << " created" << std::endl;
    for (int i = 0; i < INVENTORY_SIZE; i++)
	{
        this->_inventory[i] = NULL;
	}
}

Character::Character(Character const &base) : _name(base._name)
{
	//std::cout << "Character " << this->_name << " created" << std::endl;
    *this = base;
}

Character& Character::operator=(Character const &base)
{
    this->_name = base._name;
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
        if (this->_inventory[i])
            delete this->_inventory[i];
	}
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (base._inventory[i])
			this->_inventory[i] = base._inventory[i]->clone();
	}
	return (*this);
}

Character::~Character()
{
    //std::cout << "Character " << this->_name << " destroyed" << std::endl;
    for (int i = 0; i < INVENTORY_SIZE; i++)
	{
        if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
}

void    Character::equip(AMateria* materia)
{
    for (int i = 0; i < INVENTORY_SIZE; i++)
        if (this->_inventory[i] == NULL)
        {
			this->_inventory[i] = materia;
            std::cout << "Character " << this->_name << " equipped with " << materia->getType() << std::endl;
            return;
        }
    std::cout << "Character " << this->_name << " can't equip " << materia->getType() << std::endl;
	delete materia;
}

void    Character::unequip(int idx)
{
	if (idx < 0 || idx >= INVENTORY_SIZE)
	{
		std::cout << "Wrong materia id used !" << std::endl;
		return ;
	}
    if (!this->_inventory[idx])
    {
        std::cout << "Cannot unequip a non existant item !" << std::endl;
		return ;
    }
    this->_inventory[idx] = NULL;
	std::cout << "Unequiped materia id" << idx << std::endl;
}

void    Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= INVENTORY_SIZE)
	{
		std::cout << "Wrong materia id used !" << std::endl;
		return ;
	}
    if (!this->_inventory[idx])
    {
        std::cout << "Cannot use a non-existent item" << std::endl;
		return ;
    }
    this->_inventory[idx]->use(target);
}

std::string const& Character::getName() const
{
    return this->_name;
}