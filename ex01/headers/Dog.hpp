/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:52:31 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/29 16:16:13 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
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