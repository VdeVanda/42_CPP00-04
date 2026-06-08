/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 08:45:44 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/08 23:16:02 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain *brain;

    public:
        Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &other);
        ~Cat();

        void makeSound() const;
        Brain* getBrain() const;
};

#endif
