/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:52:31 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/29 16:56:09 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class	Dog : public AAnimal
{
	public:

		Dog();
		Dog(std::string type);
		Dog(const Dog &base);
		Dog& operator=(const Dog &base);
		~Dog();

		void makeSound(void) const;
	
	private:

		Brain *brain;
};

#endif