/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 20:39:46 by spitul            #+#    #+#             */
/*   Updated: 2025/05/12 07:23:04 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact
{
  private:
	std::string _fname;
	std::string _lname;
	std::string _nickn;
	std::string _phone;
	std::string _darksecret;
	int _index;

  public:
	Contact(void);
	~Contact(void);
};

#endif
