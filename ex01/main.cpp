/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 20:39:31 by spitul            #+#    #+#             */
/*   Updated: 2025/05/12 07:41:37 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	
	std::string	input;
	bool		exit;
	PhoneBook	ph;
	
	exit =  false;
	PhoneBook::_count = 0;
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
