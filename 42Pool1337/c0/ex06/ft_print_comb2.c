/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 08:48:01 by zouddach          #+#    #+#             */
/*   Updated: 2023/07/13 10:23:23 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_ktb(int x)
{
	if (x < 10)
	{
		write(1, "0", 1);
		ft_putchar(x + 48);
	}
	else
	{
		ft_putchar((x / 10) + 48);
		ft_putchar((x % 10) + 48);
	}
}

void	ft_if(int f, int g)
{
	if (f == 98 && g == 99)
	{
		ft_ktb(f);
		write(1, " ", 1);
		ft_ktb(g);
	}
	else
	{
		ft_ktb(f);
		write(1, " ", 1);
		ft_ktb(g);
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_if(a, b);
			b++;
		}
		a++;
	}
}
