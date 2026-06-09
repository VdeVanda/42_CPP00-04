/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 17:23:07 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/09 12:01:45 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"


 int main()
{
	std::cout << std::endl << "=== Creating new Dog and new Cat ===" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

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

    //std::cout << std::endl << "== Testing makeSound() for all animals ===" << std::endl;
    idx = 0;
    while (idx < arraySize)
    {
        std::cout << "Animal " << idx << " (" << animals[idx]->getType() << "): ";
        animals[idx]->makeSound();
        idx++;
    }

    //std::cout << std::endl  << "=== Deleting all Animals ===" << std::endl;
    idx = 0;
    while (idx < arraySize)
    {
        std::cout << "[Deleting Animal " << idx << "]" << std::endl;
        delete animals[idx];
        idx++;
    }

    std::cout << std::endl  << "=== Deep copy test - Dog (Copy Constructor) ===" << std::endl;

    Dog basic;
    basic.getBrain()->setIdea(0, "chase the ball");
    Dog temp(basic);

    std::cout << "basic dog idea: " << basic.getBrain()->getIdea(0) << std::endl;
    std::cout << "temp dog idea: " << temp.getBrain()->getIdea(0) << std::endl;

    temp.getBrain()->setIdea(0, "sleep");
    std::cout << "After changing temp's dog idea:" << std::endl;
    std::cout << "basic dog idea: " << basic.getBrain()->getIdea(0) << std::endl;
    std::cout << "temp dog idea: " << temp.getBrain()->getIdea(0) << std::endl;

    std::cout << std::endl  << "=== Deep copy test - Cat (Assignment Operator) ===" << std::endl;

    std::cout << std::endl << "--- Destructors ---" << std::endl;

    return 0;

}
/*

SUBJECT::

In your main function, create and fill an array of Animal objects. Half of it will
be Dog objects and the other half will be Cat objects. At the end of your program
execution, loop over this array and delete every Animal. You must delete directly dogs
and cats as Animals. The appropriate destructors must be called in the expected order.
Don’t forget to check for memory leaks.

A copy of a Dog or a Cat mustn’t be shallow. Thus, you have to test that your copies
are deep copies!

EVAL::

Concrete Brain

The copy a Cat or a Dog should be a deep copy.
Test something like:
Dog basic;
{
Dog tmp = basic;
}
If the copy is shallow, tmp and basic will use the same Brain and
the Brain will get deleted with tmp at the end of the scope.
The copy constructor should do a deep copy too.
That's why a clean implementation in orthodox canonical form will
save you from hours of pain.

Destruction chaining

The destructors in Animal must be virtual.
Ask an explanation of what will happen without the virtual keyword over Animal destructor.
Test it.

The copy and assignment behaviors of the Cat and Dog are like the
subject requires.
Deep copy means you need to create a new Brain for the Cat or Dog.
Check that the canonical form is really implemented (i.e. no empty
copy assignment operators and so forth). Nothing should be public for no
reason. Moreover, this code is very simple so it needs to be clean!*/

/* int main()
{
    std::cout << "\n--- Creating new Dog and new Cat ---" << std::endl;    std::cout << "\n--- Deep copy test ---" << std::endl;
    Dog d1;
    d1.getBrain()->setIdea(0, "chase the ball");
    Dog d2(d1);
    std::cout << "d1 idea[0]: " << d1.getBrain()->getIdea(0) << std::endl;
    std::cout << "d2 idea[0]: " << d2.getBrain()->getIdea(0) << std::endl;
    d2.getBrain()->setIdea(0, "sleep");
    std::cout << "After changing d2's idea:" << std::endl;
    std::cout << "d1 idea[0]: " << d1.getBrain()->getIdea(0) << std::endl;
    std::cout << "d2 idea[0]: " << d2.getBrain()->getIdea(0) << std::endl;

    std::cout << "\n--- Destructors ---" << std::endl;
    return 0;
} */


/* int main()
{
	std::cout << std::endl << "=== Testing Basic Construction and Destruction ===" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl << "=== Deleting Animals (should not create a leak) ===" << std::endl;
    delete j; //should not create a leak
    delete i;



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

 */
