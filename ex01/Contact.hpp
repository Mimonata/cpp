/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 20:39:46 by spitul            #+#    #+#             */
/*   Updated: 2025/05/17 16:31:15 by spitul           ###   ########.fr       */
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

  public:
	int index;
	
	Contact(void);
	Contact(const std::string fname, const std::string lname,
		const std::string nickn, const std::string phone,
		const std::string darksecret, int index);
	~Contact(void);

	std::string	getFname (void) const; 
	std::string getLname (void) const;
	std::string getNickn (void) const;
	std::string getPhone (void) const;
	std::string	getSecret (void) const;

	void displayContact(void) const;
};

#endif
