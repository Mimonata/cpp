/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 21:39:48 by spitul            #+#    #+#             */
/*   Updated: 2025/05/13 15:02:05 by spitul           ###   ########.fr       */
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
		contacts[i] = contacts[i + 1];
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

void PhoneBook::display_cell(std::string str, bool separator)
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

void PhoneBook::display_data(std::string index, std::string fname, std::string lname,
	std::string nickn)
{
	display_cell(index, true);
	display_cell(fname, true);
	display_cell(lname, true);
	display_cell(nickn, false);
}

void PhoneBook::Search(void)
{
	display_data("Index", "First Name", "Last Name", "Nickname");
	for (int i = 0; i < last; i ++)
		display_data(std::to_string(contacts[i]._index), )
}
