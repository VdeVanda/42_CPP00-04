/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 23:55:11 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/11 10:22:21 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << std::endl << "=== CREATING DOG AND CAT AS ANIMAL POINTERS ===" << std::endl << std::endl;

    //const AAnimal* abstract = new AAnimal(); // ❌ ERROR: cannot instantiate abstract class
    const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();

	//std::cout << std::endl << "new Animal " << abstract->getType() << " " << std::endl;
	std::cout << std::endl << "new " << dog->getType() << " " << std::endl;
	std::cout << "new " << cat->getType() << " " << std::endl;

    std::cout << std::endl << "===  SOUNDS ===" << std::endl;
	//abstract->makeSound();
	dog->makeSound();
    cat->makeSound();

    std::cout << std::endl << "===  DESTRUCTORS ===" << std::endl;
    //delete abstract;
	delete cat;
	delete dog;

    return 0;
}

