/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 11:42:02 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/28 13:05:42 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class	Animal
{

	public:

		Animal();
		Animal(std::string type);
		Animal(const Animal &base);
		Animal& operator=(const Animal &base);
		virtual ~Animal();
		
		virtual void makeSound(void) const;
		std::string getType(void) const;

	protected:

		std::string type;

};

#endif