/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 21:39:48 by spitul            #+#    #+#             */
/*   Updated: 2025/05/14 07:36:09 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::last = 0;
bool PhoneBook::full = false;

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void PhoneBook::updateBook()
{
	int	i;

	for (i = 0; i < MAX; i++)
	{
		contacts[i] = contacts[i + 1];
		contacts[i].index = i - 1;
	}
}

void PhoneBook::addContact(int index)
{
	std::string fname, lname, nickn, phone, secret;
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
		last++;
		if (last == MAX - 1 && !full)
			full = true;
	}
}

void PhoneBook::displayCell(std::string str, bool separator)
{
	if (str.length() > STR_LEN)
	{
		std::cout << std::setw(STR_LEN) << str.substr(0, STR_LEN - 1) + ".";
	}
	else
	{
		std::cout << std::setw(STR_LEN) << str;
	}
	if (separator)
		std::cout << "|";
	else
		std::cout << std::endl;
}

void PhoneBook::displayRow(std::string index, std::string fname, std::string lname,
	std::string nickn)
{
	displayCell(index, true);
	displayCell(fname, true);
	displayCell(lname, true);
	displayCell(nickn, false);
}

void	PhoneBook::displayContact(int index) const
{
	std::cout << contacts[index].getFname() << std::endl;
	std::cout << contacts[index].getLname() << std::endl;
	std::cout << contacts[index].getNickn() << std::endl;
	std::cout << contacts[index].getPhone() << std::endl;
	std::cout << contacts[index].getSecret() << std::endl;
}

void PhoneBook::getContact(void)
{
	std::string input;
	int			index;
	
	std::cout << "Enter the index for the contact number you want to see" << std::endl;
	std::getline(std::cin, input);
	if (input.length() != 1 && !std::isdigit(input[0]))
	{
		std::cout << "Invalid input" << std::endl;
		return ;
	}
	index = input[0] - '0';
	if (index >= 0 && index < last)
		displayContact(index);
	else 
		std::cout << "Invalid input - please select from an available index or press intro to exit" << std::endl;
}

void PhoneBook::Search(void)
{
	std::stringstream	stm;
	std::string			str_ind;
	
	displayRow("Index", "First Name", "Last Name", "Nickname");
	for (int i = 0; i < last; i ++)
	{
		stm << contacts[i].index;
		str_ind = stm.str();
		displayRow(str_ind, contacts[i].getFname(), 
		contacts[i].getLname(), contacts[i].getNickn());
	}
	getContact();
}
