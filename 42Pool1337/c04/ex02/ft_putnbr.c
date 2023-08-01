/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:46:20 by zouddach          #+#    #+#             */
/*   Updated: 2023/07/25 17:01:39 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	nl(int nbr)
{
	int	digits;

	digits = 1;//1000
	while (nbr / 10 != 0)
	{
		digits *= 10;
		nbr /= 10;
	}
	return (digits);
}

int	ktb(int nb, int digits, char nchar)//1234-1000-0
{
	while (digits != 0)
	{
		nchar = (nb / digits) + 48;//1234
		write(1, &nchar, 1);
		nb %= digits;//0
		digits /= 10;//1
	}
}

void	ft_putnbr(int nb)
{
	int		digits;
	char	nchar;

	nchar = 0;
	digits = 0;
	if (nb == 0)
		write(1, "0", 1);
	else if (nb < 0)
	{
		if (nb == -2147483648)
			write(1, "-2147483648", 11);
		else
		{
			write(1, "-", 1);
			nb = -nb;
			digits = nl(nb);//1000
			ktb(nb, digits, nchar);
		}
	}
	else
	{
		digits = nl(nb);
		ktb(nb, digits, nchar);
	}
}
