/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 21:39:48 by spitul            #+#    #+#             */
/*   Updated: 2025/05/12 19:51:09 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::updateBook()
{
	int	i;

	for (i = 0; i < MAX; i++)
		contacts[i] = contacts[i + 1];
}

void	PhoneBook::addContact(int index)
{
	std::string	fname, lname, nickn, phone, secret;

	std::cout << "Enter the first name" << std::endl;
	std::getline(std::cin, fname);
	std::cout << "Enter the last name" << std::endl;
	std::getline(std::cin, lname);
	std::cout << "Enter the nickname" << std::endl;
	std::getline(std::cin, nickn);
	std::cout << "Enter the phone number" << std::endl;
	std::getline(std::cin, phone);
	std::cout << "Enter the darkest secret" << std::endl;
	std::getline(std::cin, secret);
	contacts[index] = Contact(fname, lname, nickn, phone, secret, index);
}

void PhoneBook::Add(void)
{
	if (PhoneBook::full)
	{
		updateBook();
		addContact(MAX - 1);
	}
	else
	{
		addContact(last);
		last ++;
		if (last == MAX - 1 && !full)
			full = true;
	}
}
