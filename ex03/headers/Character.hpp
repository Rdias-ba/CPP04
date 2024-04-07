/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 15:39:30 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/04/07 21:47:42 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# define INVENTORY_SIZE	4

# include "AMateria.hpp"
# include "ICharacter.hpp"


class Character : public ICharacter 
{
	private:
	
    	std::string _name;
    	AMateria 	*_inventory[INVENTORY_SIZE];

 	public:

    	Character();
		Character(const Character &base);
    	Character(std::string const &name);
    	~Character();

    	Character &operator=(const Character &base);

    	std::string const &getName(void) const;
		
    	void equip(AMateria *materia);
    	void unequip(int idx);
    	void use(int idx, ICharacter &target);
};

#endif