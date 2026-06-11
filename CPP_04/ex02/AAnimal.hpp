/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:10:28 by vabatist          #+#    #+#             */
/*   Updated: 2026/06/11 12:58:35 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	protected:
		std::string _type;
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &copy);

	public:
		AAnimal &operator=(const AAnimal &other);
        virtual ~AAnimal();

		virtual void			makeSound() const = 0;
		virtual std::string		getType() const;
};

#endif
