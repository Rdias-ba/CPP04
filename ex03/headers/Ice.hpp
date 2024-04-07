/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 15:22:20 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/04/07 22:48:36 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
			
			Ice();
			~Ice();

			Ice(const Ice &base);
			Ice &operator=(const Ice &base);

			AMateria *clone() const;
			void use(ICharacter &target);
};

#endif