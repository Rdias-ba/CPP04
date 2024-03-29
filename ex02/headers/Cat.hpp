/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 13:36:57 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/29 16:56:43 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"

class	Cat : public AAnimal
{
	public:

		Cat();
		Cat(std::string type);
		Cat(const Cat &base);
		Cat& operator=(const Cat &base);
		~Cat();

		void makeSound(void) const;
	
	private:

		Brain *brain;
};

#endif