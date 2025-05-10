/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 21:40:31 by spitul            #+#    #+#             */
/*   Updated: 2025/05/10 17:58:47 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(const std::string fname, const std::string lname,
	const std::string nickn, const std::string phone,
	const std::string darksecret, int index) : fname(fname), lname(lname),
	nickn(nickn), phone(phone), darksecret(darksecret), index(index)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}
