/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 20:39:31 by spitul            #+#    #+#             */
/*   Updated: 2025/05/12 19:05:26 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	
	std::string	input;
	bool		exit;
	PhoneBook	ph;
	
	exit = false;
	PhoneBook::last = 0;
	PhoneBook::full = false;
	while (!exit)
	{
		std::cout << "Welcome! Please enter ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			ph.Add();
		}	
		else if (input == "SEARCH")
		{
			
		}
		else if (input == "EXIT")
		{
			
		}
		else
		{
			std::cout << "Wrong input\n Available options: ADD SEARCH EXIT" << std::endl;
		}
	}
}
