/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 21:40:31 by spitul            #+#    #+#             */
/*   Updated: 2025/05/12 19:41:54 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(const std::string fname, const std::string lname,
	const std::string nickn, const std::string phone,
	const std::string darksecret, int index) : _fname(fname), _lname(lname),
	_nickn(nickn), _phone(phone), _darksecret(darksecret), _index(index)
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
