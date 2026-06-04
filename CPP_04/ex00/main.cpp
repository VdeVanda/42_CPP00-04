/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 17:23:07 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/04 17:24:38 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
//#include "Cat.hpp"
//#include "WrongAnimal.hpp"
//#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	//const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	//std::cout << i->getType() << " " << std::endl;
	//i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	//const WrongAnimal *wrong = new WrongCat();
	//const WrongAnimal *wrong2 = new WrongAnimal();
	//wrong->makeSound();
	//wrong2->makeSound();
	//delete wrong;
	//delete i;
	delete j;
	delete meta;
	return 0;
}
