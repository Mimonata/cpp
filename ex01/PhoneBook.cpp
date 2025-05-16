/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 21:39:48 by spitul            #+#    #+#             */
/*   Updated: 2025/05/16 21:56:33 by spitul           ###   ########.fr       */
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

	for (i = 0; i < MAX - 1; i++)
	{
		contacts[i] = contacts[i + 1];
		contacts[i].index = i;
	}
}

std::string PhoneBook::getInput(std::string prompt)
{
	std::string input;
	std::cout << prompt << std::endl;
	if (!std::getline(std::cin, input))
	{
		std::cin.clear();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return ("");
		}
		std::cin.ignore(10000, '\n');
	}
	return (input);
}

void PhoneBook::addContact(int index)
{
	std::string fname, lname, nickn, phone, secret;
	fname = getInput("Enter the first name");
	if (fname.empty())
		return ;
	lname = getInput("Enter the last name");
	if (lname.empty())
		return ;
	nickn = getInput("Enter the nickname");
	if (nickn.empty())
		return ;
	phone = getInput("Enter the phone number");
	if (phone.empty())
		return ;
	secret = getInput("Enter the darkest secret");
	if (secret.empty())
		return ;
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
		last++;
		addContact(last - 1);
		if (last == MAX && !full)
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

void PhoneBook::displayRow(std::string index, std::string fname,
	std::string lname, std::string nickn)
{
	displayCell(index, true);
	displayCell(fname, true);
	displayCell(lname, true);
	displayCell(nickn, false);
}

void PhoneBook::displayContact(int index) const
{
	std::cout << "First name: " << contacts[index].getFname() << std::endl;
	std::cout << "Last name: " << contacts[index].getLname() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickn() << std::endl;
	std::cout << "Phone: " << contacts[index].getPhone() << std::endl;
	std::cout << "Darkest secret: " << contacts[index].getSecret() << std::endl;
}

void PhoneBook::getContact(void)
{
	int	index;
	std::string input;
	
	while (1)
	{
		input = getInput("Enter the index for a phone number or EXIT to return");
		if (input.empty())
			return ;
		if (input == "EXIT")
			return ;
		if (input.length() != 1 && !std::isdigit(input[0]))
		{
			std::cout << "Invalid input" << std::endl;
			continue ;
		}
		index = input[0] - '0' - 1;
		if (index >= 0 && index < last)
			displayContact(index);
		else
			std::cout << "Invalid input" << std::endl;
	}
}

void PhoneBook::Search(void)
{
	std::stringstream stm;
	std::string str_ind;
	
	displayRow("Index", "First Name", "Last Name", "Nickname");
	for (int i = 0; i < last; i++)
	{
		stm.str("");
		stm.clear();
		stm << contacts[i].index + 1;
		str_ind = stm.str();
		displayRow(str_ind, contacts[i].getFname(), contacts[i].getLname(),
			contacts[i].getNickn());
	}
	getContact();
}
