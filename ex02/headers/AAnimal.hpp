/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 11:42:02 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/29 16:16:02 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include "Brain.hpp"
# include <string>
# include <iostream>

class	AAnimal
{
	public:

		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &base);
		AAnimal& operator=(const AAnimal &base);
		virtual ~AAnimal();
		
		std::string getType(void) const;
		void setType(std::string type);

		virtual void makeSound(void) const = 0;

	protected:

		std::string type;

};

#endif