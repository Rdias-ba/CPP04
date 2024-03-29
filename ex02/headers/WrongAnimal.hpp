/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:56:16 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/29 13:57:32 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
	public:

		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &original);
		WrongAnimal &operator=(const WrongAnimal &to_copy);
		virtual ~WrongAnimal();

		std::string getType(void) const;
		void setType(std::string type);

		void makeSound(void) const;

	protected:
		std::string type;
};

#endif