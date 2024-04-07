/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:49:20 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/04/07 21:32:03 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
			
			std::string _type;

	public:

			AMateria();
			AMateria(std::string const &type);
			AMateria(const AMateria &base);
			virtual ~AMateria();

			virtual AMateria &operator=(const AMateria &materia);

			std::string const &getType() const;
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
};

#endif