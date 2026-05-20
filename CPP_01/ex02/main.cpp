/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 23:10:59 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/20 23:21:39 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string str_brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &str_brain;
	std::string& stringREF = str_brain;

	std::cout << std::endl << "Memory addresses:" << std::endl;
	std::cout << "string: " << (long)&str_brain << std::endl;
	std::cout << "stringPTR: " << (long)stringPTR << std::endl;
	std::cout << "stringREF: " << (long)&stringREF << std::endl;

	std::cout << std::endl << "Values:" << std::endl;
	std::cout << "string: " << str_brain << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}
