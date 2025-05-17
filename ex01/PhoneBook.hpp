/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 07:29:38 by spitul            #+#    #+#             */
/*   Updated: 2025/05/17 16:22:57 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <cctype>
# include <iomanip>
# include <iostream>
# include <sstream>

# define MAX 4
# define STR_LEN 10

# define RESET "\033[0m"
# define ORANGE "\033[38;5;208m"
# define PINK "\033[38;5;198m"
# define TEAL "\033[38;2;64;224;208m" 
# define GREEN "\033[38;2;0;128;128m"
# define YELLOW "\033[38;5;229m"
# define LIGHT_YELLOW "\033[38;5;229m" 
# define LILA "\033[38;5;183m"   
# define DARK_ORANGE "\033[38;5;166m"

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
	void displayRow(std::string index, std::string fname, std::string lname,
		std::string nickn);
	void getContact(void);
	std::string	getInput(std::string prompt, bool *eof);
};

#endif
