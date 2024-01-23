/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpapa <kpapa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:43:23 by kpapa             #+#    #+#             */
/*   Updated: 2022/11/15 18:47:15 by kpapa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	get_nr(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		get_nr('-');
		get_nr('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		get_nr('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10 && nb >= 0)
	{
		get_nr(nb + 48);
	}
}

/*int main(void)
{
    ft_putnbr(-4);
    return (0);
}*/