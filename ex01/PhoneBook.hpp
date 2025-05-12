/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 07:29:38 by spitul            #+#    #+#             */
/*   Updated: 2025/05/12 19:38:32 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include "Contact.hpp"

# define MAX 8

class	PhoneBook
{
	private:
		
	
	public: 
		Contact	contacts[MAX];
		void	Add();
		void	Search(Contact contacts[MAX]);
		void	Exit();

		static int	last;
		static bool	full;
		
		PhoneBook(void);
		~PhoneBook(void);

		void	updateBook(void);
		void	addContact(int index);
};

#endif
