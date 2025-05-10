/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 20:39:46 by spitul            #+#    #+#             */
/*   Updated: 2025/05/10 17:49:50 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact
{
  private:
	std::string fname;
	std::string lname;
	std::string nickn;
	std::string phone;
	std::string darksecret;
	int index;

  public:
	Contact(const std::string fname, const std::string lname,
		const std::string nickn, const std::string phone,
		const std::string darksecret, int index);
	~Contact(void);
};

#endif
