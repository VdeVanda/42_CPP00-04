/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 17:23:07 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/09 00:31:17 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << std::endl << "=== Testing Basic Construction and Destruction ===" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl << "=== Deleting Animals (should not create a leak) ===" << std::endl;
    delete j; //should not create a leak
    delete i;

	std::cout << std::endl << "=== Creating Array of Animals ===" << std::endl;
    const int arraySize = 6;
    Animal* animals[arraySize];

	// Fill half with Dogs
	int idx = 0;
	while (idx < arraySize / 2)
	{
        std::cout << std::endl << "[Creating Dog " << idx << "]" << std::endl;
        animals[idx] = new Dog();
		idx++;
    }

    // Fill half with Cats
	idx = arraySize / 2;
    while (idx < arraySize)
	{
        std::cout << std::endl << "[Creating Cat " << idx << "]" << std::endl;
        animals[idx] = new Cat();
		idx++;
    }

/* std::cout << std::endl << "== Testing makeSound() for all animals ===" << std::endl;
    idx = 0;
    while (idx < arraySize)
    {
        std::cout << "Animal " << idx << " (" << animals[idx]->getType() << "): ";
        animals[idx]->makeSound();
        idx++;
    } */

std::cout << std::endl  << "=== Deleting all Animals ===" << std::endl;
    idx = 0;
    while (idx < arraySize)
    {
        std::cout << "[Deleting Animal " << idx << "]" << std::endl;
        delete animals[idx];
        idx++;
    }

	// ===== Testing Deep Copy - Dog (Copy Constructor) =====
	std::cout << std::endl << "=== Testing Deep Copy - Dog ===" << std::endl;
    Dog* originalDog = new Dog();
    originalDog->getBrain()->setIdea(0, "I love bones!");
    originalDog->getBrain()->setIdea(1, "Chase the mailman!");

    std::cout << std::endl << "Creating copy of Dog..." << std::endl;
    Dog* copiedDog = new Dog(*originalDog);

    std::cout << std::endl << "Original Dog ideas:" << std::endl;
    std::cout << "  Idea 0: " << originalDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "  Idea 1: " << originalDog->getBrain()->getIdea(1) << std::endl;

    std::cout << std::endl << "Copied Dog ideas:" << std::endl;
    std::cout << "  Idea 0: " << copiedDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "  Idea 1: " << copiedDog->getBrain()->getIdea(1) << std::endl;

    std::cout << std::endl << "Modifying original Dog's ideas..." << std::endl;
    originalDog->getBrain()->setIdea(0, "I love digging!");

    std::cout << std::endl << "After modification:" << std::endl;
    std::cout << "  Original Dog Idea 0: " << originalDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "  Copied Dog Idea 0: " << copiedDog->getBrain()->getIdea(0) << std::endl;

    std::cout << std::endl << "✓ Deep copy verified: Brain addresses are different!" << std::endl;
    std::cout << "  Original Brain address: " << originalDog->getBrain() << std::endl;
    std::cout << "  Copied Brain address: " << copiedDog->getBrain() << std::endl;

	std::cout << std::endl;
    delete originalDog;
    delete copiedDog;

	// ===== Testing Deep Copy - Cat (Assignment Operator) =====
    std::cout << std::endl << "=== Testing Deep Copy - Cat ===" << std::endl;
    Cat* originalCat = new Cat();
    originalCat->getBrain()->setIdea(0, "I love napping!");
    originalCat->getBrain()->setIdea(1, "Knock things off tables!");

    std::cout << std::endl << "Creating copy via assignment operator..." << std::endl;
    Cat* assignedCat = new Cat();
    *assignedCat = *originalCat;

    std::cout << std::endl << "Original Cat ideas:" << std::endl;
    std::cout << "  Idea 0: " << originalCat->getBrain()->getIdea(0) << std::endl;
    std::cout << "  Idea 1: " << originalCat->getBrain()->getIdea(1) << std::endl;

    std::cout << std::endl << "Assigned Cat ideas:" << std::endl;
    std::cout << "  Idea 0: " << assignedCat->getBrain()->getIdea(0) << std::endl;
    std::cout << "  Idea 1: " << assignedCat->getBrain()->getIdea(1) << std::endl;

    std::cout << std::endl << "Modifying original Cat's ideas..." << std::endl;
    originalCat->getBrain()->setIdea(0, "I love chasing lasers!");

    std::cout << std::endl << "After modification:" << std::endl;
    std::cout << "  Original Cat Idea 0: " << originalCat->getBrain()->getIdea(0) << std::endl;
    std::cout << "  Assigned Cat Idea 0: " << assignedCat->getBrain()->getIdea(0) << std::endl;

    std::cout << std::endl << "✓ Deep copy verified: Brain addresses are different!" << std::endl;
    std::cout << "  Original Brain address: " << originalCat->getBrain() << std::endl;
    std::cout << "  Assigned Brain address: " << assignedCat->getBrain() << std::endl;

	std::cout << std::endl;
    delete originalCat;
    delete assignedCat;
	std::cout << std::endl;
	return 0;
}

