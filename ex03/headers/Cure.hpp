/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 14:46:53 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/04/07 22:48:55 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
			
			Cure();
			~Cure();

			Cure(const Cure &base);
			Cure &operator=(const Cure &base);

			AMateria *clone() const;
			void use(ICharacter &target);
};

#endif