/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 23:55:11 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/11 00:16:00 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << std::endl << "=== Creating Dog and Cat as Animal pointers ===" << std::endl << std::endl;

    //const AAnimal* abstract = new AAnimal(); // ❌ ERROR: cannot instantiate abstract class
    const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();

	std::cout << std::endl << "new " << dog->getType() << " " << std::endl;
	std::cout << "new " << cat->getType() << " " << std::endl;

    std::cout << std::endl << "===  Sounds === " << std::endl;
	dog->makeSound();
    cat->makeSound();
    //abstract->makeSound();

    std::cout << std::endl << "===  Destructors === " << std::endl;
    delete dog;
    delete cat;

    return 0;
}

