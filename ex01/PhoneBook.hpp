/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 07:29:38 by spitul            #+#    #+#             */
/*   Updated: 2025/05/13 21:20:34 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iomanip>
# include <iostream>
# include <cctype>

# define MAX 8
# define STR_LEN 10

class PhoneBook
{
  private:
  
  public:
	Contact contacts[MAX];
	void Add(void);
	void Search(void);
	void Exit(void);

	static int last;
	static bool full;

	PhoneBook(void);
	~PhoneBook(void);

	void updateBook(void);
	void addContact(int index);
	void displayCell(std::string str, bool separator);
	void PhoneBook::displayRow(std::string index, std::string fname,
		std::string lname, std::string nickn);
	void	getContact(void);
	void	displayContact(int index);
	
};

#endif
