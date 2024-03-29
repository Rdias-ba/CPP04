/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:11:27 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/29 16:34:09 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* dog = new Dog();
	std::cout << std::endl;

	const Animal* cat = new Cat();
	std::cout << std::endl;

	const Animal* zoo[10];

	std::cout << "------------------- DOGS -------------------" << std::endl;
	for (size_t i = 0; i < 5; i += 1) {
		zoo[i] = new Dog();
		std::cout << std::endl;
	}

	std::cout << "------------------- CATS -------------------" << std::endl;
	for (size_t i = 5; i < 10; i += 1) {
		zoo[i] = new Cat();
		std::cout << std::endl;
	}

	std::cout << "------------------- Check zoo -------------------" << std::endl;
	for (size_t i = 0; i < 10; i += 1) {
		zoo[i]->makeSound();
	}
	std::cout << std::endl;

	std::cout << "---------------- DELETE ZOO ---------------" << std::endl;
	for (size_t i = 0; i < 10; i += 1) {
		delete zoo[i];
	}

	std::cout << std::endl;
	std::cout << "---------------- DELETE Animals ---------------" << std::endl;

	delete dog;
	delete cat;

	return 0; 
}