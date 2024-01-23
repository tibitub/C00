/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpapa <kpapa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:39:15 by kpapa             #+#    #+#             */
/*   Updated: 2022/11/14 16:09:57 by kpapa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	get_nr(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (x != '7' || y != '8' || z != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	nr1;
	char	nr2;
	char	nr3;

	nr1 = '0';
	nr2 = '1';
	nr3 = '2';
	while (nr1 <= '7')
	{
		nr2 = nr1 + 1;
		while (nr2 <= '8')
		{
			nr3 = nr2 + 1;
			while (nr3 <= '9')
			{
				get_nr(nr1, nr2, nr3);
				nr3++;
			}
			nr2++;
		}
		nr1++;
	}
}
