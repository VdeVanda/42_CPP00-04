/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 22:13:45 by vabatist          #+#    #+#             */
/*   Updated: 2026/05/21 23:19:44 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

/**
 * @brief This function searches for a string in a file and replaces it with another string.
 * First, it checks if the string to search is empty.
 * If it is, it prints an error message and closes the file.
 * Then, it creates a new file with the name <filename>.replace and checks if it is open.
 * If it is not, it prints an error message and closes the file.
 * If everything is fine, it reads the file line by line and replaces every occurrence of the string to search with the string to replace.
 * Finally, it closes both files.
 */
void	searchReplace(std::ifstream &ifs, std::string name, std::string s1, std::string s2)
{
	std::string line;
	size_t pos;

	if (s1.empty() || !s1[0])
	{
		std::cerr << "Error: nothing to search." << std::endl;
		ifs.close();
		return ;
	}
	std::ofstream ofs((name + ".replace").c_str());
	if (!ofs.is_open())
	{
		std::cerr << "Error" << std::endl;
		ifs.close();
		return ;
	}
	std::cout << std::endl << "done! " << name << ".replace successfully created!" << std::endl << std::endl;
	while (std::getline(ifs, line))
	{
		while((pos = line.find(s1)) != std::string::npos)
		{
			ofs << line.substr(0, pos) << s2;
			line = line.substr(pos + s1.length());
		}
		ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
}

/**
 * @brief The main function checks if the number of arguments is correct.
 * If it is not, it prints an error message and closes the file if it is open
 * If everything is fine, it calls the searchReplace function and closes the file.
 * Finally, it returns 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Invalid input" << std::endl << "Usage: ./sed <filename> <search> <replace>" << std::endl;
		return 1;
	}
	std::ifstream ifs(argv[1]);
	if (!ifs.is_open())
	{
		std::cerr << "Error" << std::endl;
		if (ifs.is_open())
			ifs.close();
		return 1;
	}
	searchReplace(ifs, argv[1], argv[2], argv[3]);
	ifs.close();
	return (0);
}
