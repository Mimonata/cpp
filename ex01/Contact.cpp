/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 21:40:31 by spitul            #+#    #+#             */
/*   Updated: 2025/05/17 16:28:44 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(const std::string fname, const std::string lname,
	const std::string nickn, const std::string phone,
	const std::string darksecret, int index) : _fname(fname), _lname(lname),
	_nickn(nickn), _phone(phone), _darksecret(darksecret), index(index)
{
	return ;
}

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string Contact::getFname(void) const
{
	return (_fname);
}

std::string Contact::getLname(void) const
{
	return (_lname);
}

std::string Contact::getNickn(void) const
{
	return (_nickn);
}

std::string Contact::getPhone(void) const
{
	return (_phone);
}

std::string Contact::getSecret(void) const
{
	return (_darksecret);
}

void Contact::displayContact(void) const
{
	std::cout << "First name: " << _fname << std::endl;
	std::cout << "Last name: " << _lname << std::endl;
	std::cout << "Nickname: " << _nickn << std::endl;
	std::cout << "Phone: " << _phone << std::endl;
	std::cout << "Darkest secret: " << _darksecret << std::endl;
}
