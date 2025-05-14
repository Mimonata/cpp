/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 20:39:31 by spitul            #+#    #+#             */
/*   Updated: 2025/05/14 20:08:02 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	input;
	bool		exit_book;
	PhoneBook	ph;
	
	exit_book = false;
	std::cout << DARK_ORANGE << std::setw(15) << "Phonebook" << std::endl;
	while (!exit_book)
	{
		std::cout << GREEN << "Enter ADD, SEARCH or EXIT" << RESET << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			ph.Add();
		}	
		else if (input == "SEARCH")
		{
			ph.Search();
		}
		else if (input == "EXIT")
		{
			exit_book = true;
		}
		else
		{
			std::cout << DARK_ORANGE << "Wrong input\nAvailable options: ADD SEARCH EXIT" << RESET << std::endl;
		}
	}
	return 0;
}
