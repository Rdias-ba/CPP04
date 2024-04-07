/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 15:29:47 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/04/07 16:58:23 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"

class   AMateria;

class ICharacter
{
	public:
	 
    	virtual ~ICharacter(void) {}

    	virtual std::string const &getName(void) const = 0;
    	virtual void equip(AMateria *materia) = 0;
    	virtual void unequip(int idx) = 0;
    	virtual void use(int idx, ICharacter &target) = 0;
};

#endif