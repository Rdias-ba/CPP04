/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:11:27 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/04/07 22:55:30 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	ICharacter	*me = new Character("me");
	ICharacter	*bob = new Character("bob");
	AMateria	*ice = new Ice();

	/* remplissage des inventaires */
	me->equip(new Ice());
	me->equip(ice);
	me->equip(new Ice());
	me->equip(new Cure());
	me->equip(new Cure()); // Over filling
	
	bob->equip(new Cure());
	bob->equip(new Cure());
	bob->equip(new Ice());

	/* Utilisation des materias */
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(3, *bob);
	bob->use(2, *me);

	/* Déséquipement d'un slot de materia */
	me->unequip(1);
	me->use(1, *bob);

	/* Equipement d'un slot de matéria */
	me->equip(new Cure());
	me->use(1, *bob);

	delete me;
	delete bob;
	delete ice;
	
	return 0;
}

/*
int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
return 0;
}*/