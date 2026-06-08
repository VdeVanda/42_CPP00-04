/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 17:23:07 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/08 10:25:41 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	std::cout << "========== WRONG ANIMALS ==========" << std::endl;
	std::cout << std::endl;
	const WrongAnimal *wrong = new WrongAnimal();
	const WrongAnimal *wrong2 = new WrongCat();
	wrong->makeSound();
	wrong2->makeSound();

	std::cout << std::endl;
	std::cout << "========== WRONG CAT DIRECT CALLING ==========" << std::endl;
	const WrongCat *directCat = new WrongCat();
	directCat->makeSound();  // This calls WrongCat::makeSound() ✓


	std::cout << std::endl;
	std::cout << "========== DESTRUCTION ORDER ==========" << std::endl;
	std::cout << std::endl;
	delete directCat;
	delete wrong;
	delete wrong2;
	delete i;
	delete j;
	delete meta;
	std::cout << std::endl;
	return 0;
}
