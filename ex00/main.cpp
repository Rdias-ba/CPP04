/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:11:27 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/29 15:06:25 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const Animal* meta_animal = new Animal();
	
	std::cout << dog->getType() << "-> "; 
	dog->makeSound();

	std::cout << cat->getType() << "-> "; 
	cat->makeSound();

	std::cout << std::endl;

	meta_animal->makeSound();

	std::cout << std::endl;

	std::cout << "---------- WrongAnimal & WrongCat ----------" << std::endl;

	std::cout << std::endl;

	const WrongAnimal* wrong_cat = new WrongCat();
	const WrongAnimal* meta_wrong_animal = new WrongAnimal();

	std::cout << std::endl;

	std::cout << wrong_cat->getType() << "-> "; 
	wrong_cat->makeSound();

	meta_wrong_animal->makeSound();

	std::cout << std::endl;

	delete dog;
	delete cat;
	delete meta_animal;
	delete wrong_cat;
	delete meta_wrong_animal;

	return 0;
}