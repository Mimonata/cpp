/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 07:29:38 by spitul            #+#    #+#             */
/*   Updated: 2025/05/09 22:08:56 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include "Contact.hpp"

class	Phonebook
{
	Contact	contacts[8];
	void	Add(Contact contacts[8]);
	void	Search(Contact contacts[8]);
	void	Exit();
};

#endif
