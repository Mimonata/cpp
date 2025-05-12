/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 07:29:38 by spitul            #+#    #+#             */
/*   Updated: 2025/05/12 07:16:05 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include "Contact.hpp"

# define MAX 8

class	PhoneBook
{
	private:
		static int	_count;	
	
	public: 
		Contact	contacts[MAX];
		void	Add(Contact contacts[MAX]);
		void	Search(Contact contacts[MAX]);
		void	Exit();

		PhoneBook(void);
		~PhoneBook(void);
};

#endif
