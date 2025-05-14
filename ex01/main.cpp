/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 20:39:31 by spitul            #+#    #+#             */
/*   Updated: 2025/05/14 07:25:50 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	input;
	bool		exit_book;
	PhoneBook	ph;
	
	exit_book = false;
	while (!exit_book)
	{
		std::cout << "Welcome! Please enter ADD, SEARCH or EXIT" << std::endl;
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
			std::cout << "Wrong input\n Available options: ADD SEARCH EXIT" << std::endl;
		}
	}
	return 0;
}
