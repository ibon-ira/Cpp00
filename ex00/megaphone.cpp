/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboiraza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 11:21:07 by iboiraza          #+#    #+#             */
/*   Updated: 2025/08/11 11:21:13 by iboiraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main (int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (argv[i + 1])
		{
			j = 0;
			while (argv[i + 1][j])
			{
				if (std::islower(argv[i + 1][j]))
					std::cout << static_cast<char>(std::toupper(argv[i + 1][j]));
				else
					std::cout << argv[i + 1][j];
				j++;
			}
			std::cout << " ";
			i++;
		}
		std::cout << "\n";
	}
}
