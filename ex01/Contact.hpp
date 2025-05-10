/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 20:39:46 by spitul            #+#    #+#             */
/*   Updated: 2025/05/09 22:11:34 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

# include <iostream>

class	Contact
{
	private:
		std::string	fname;
		std::string	lname;
		std::string	nickn;
		std::string	phone;
		std::string	darksecret;
		int			index;
	
	public:
		Contact(void);
		~Contact(void);
};

#endif
