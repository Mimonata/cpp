/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:53:19 by spitul            #+#    #+#             */
/*   Updated: 2025/04/16 20:08:11 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int i(1);
	int j(0);

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (ac > 1)
	{
		while (i < ac)
		{
			while (av[i][j] != 0)
			{
				std::cout << (char)toupper(av[i][j]);
				j ++;
			}
			std::cout << " ";
			j = 0;
			i ++;
		}
		std::cout << "\n";
	}
	return 0;
}
