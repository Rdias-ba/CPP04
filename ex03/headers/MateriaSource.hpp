/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:25:45 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/04/07 22:20:16 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# define MAX_SIZE 4

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource 
{
 	private:

    	AMateria *_materia[MAX_SIZE];

	public:

    	MateriaSource();
		MateriaSource(MateriaSource const &base);
    	~MateriaSource();

    	MateriaSource &operator=(MateriaSource const &base);

    	void learnMateria(AMateria *materia);
    	AMateria *createMateria(std::string const &type);
};

#endif