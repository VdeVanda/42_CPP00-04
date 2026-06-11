/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 17:23:07 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/11 10:15:18 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"


 int main()
{
	std::cout << std::endl << "=== CREATING NEW DOG AND NEW CAT ===" << std::endl << std::endl;

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl;

    delete j; //should not create a leak
    delete i;

    std::cout << std::endl << "=== CREATING ARRAY OF ANIMALS ===" << std::endl;
    const int arraySize = 6;
    Animal* animals[arraySize];

	int idx = 0;
	while (idx < arraySize / 2) 	// Fill half with Dogs
	{
        std::cout << std::endl << "[Creating Dog " << idx << "]" << std::endl;
        animals[idx] = new Dog();
		idx++;
    }

    std::cout << std::endl;

	idx = arraySize / 2;     // Fill half with Cats
    while (idx < arraySize)
	{
        std::cout << std::endl << "[Creating Cat " << idx << "]" << std::endl;
        animals[idx] = new Cat();
		idx++;
    }

    std::cout << std::endl;

    //std::cout << std::endl << "== Testing makeSound() for all animals ===" << std::endl;
    idx = 0;
    while (idx < arraySize)
    {
        std::cout << "Animal " << idx << " (" << animals[idx]->getType() << "): ";
        animals[idx]->makeSound();
        idx++;
    }

    std::cout << std::endl;

    //std::cout << std::endl  << "=== Deleting all Animals ===" << std::endl;
    idx = 0;
    while (idx < arraySize)
    {
        std::cout << "[Deleting Animal " << idx << "]" << std::endl;
        delete animals[idx];
        idx++;
    }

    std::cout << std::endl  << "=== DEEP COPY TEST - CAT (COPY CONSTRUCTOR) ===" << std::endl << std::endl;

    Cat originalCat;
    originalCat.getBrain()->setIdea(0, "chase the ball");
    Cat copyCat(originalCat);

    std::cout << std::endl << "original cat idea: " << originalCat.getBrain()->getIdea(0) << std::endl;
    std::cout << "copy cat idea: " << copyCat.getBrain()->getIdea(0) << std::endl;

    copyCat.getBrain()->setIdea(0, "sleep");
    std::cout << std::endl<< "(After changing copy's cat idea)" << std::endl;
    std::cout << "original cat idea: " << originalCat.getBrain()->getIdea(0) << std::endl;
    std::cout << "copy cat idea: " << copyCat.getBrain()->getIdea(0) << std::endl;

    std::cout << std::endl  << "=== DEEP COPY TEST - DOG (ASSIGNMENT OPERATOR) ===" << std::endl << std::endl;

    Dog basic;
    basic.getBrain()->setIdea(0, "I love napping!");
    Dog tmp;
    tmp = basic;

    std::cout << std::endl << "Basic Dog idea: " << basic.getBrain()->getIdea(0);
    std::cout << std::endl << "tmp Dog idea: " << tmp.getBrain()->getIdea(0) << std::endl;

    basic.getBrain()->setIdea(0, "I love chasing lasers!");
    std::cout << std::endl << "New Basic Dog idea: " << basic.getBrain()->getIdea(0) << std::endl;
    std::cout << "tmp Dog idea:: " << tmp.getBrain()->getIdea(0) << std::endl;

    tmp.getBrain()->setIdea(0, "bla bla bla");
    std::cout << std::endl << "New Basic Dog idea: " << basic.getBrain()->getIdea(0) << std::endl;
    std::cout << "New tmp Dog idea:: " << tmp.getBrain()->getIdea(0) << std::endl;

    std::cout << std::endl;
    std::cout << "basic Dog Brain address: " << basic.getBrain() << std::endl;
    std::cout << "tmp Dog Brain address: " << tmp.getBrain() << std::endl << std::endl;

    std::cout << "=== DESTRUCTORS ===" << std::endl << std::endl;

    return 0;
}
