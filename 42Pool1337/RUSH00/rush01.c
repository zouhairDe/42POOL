/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:13:26 by zouddach          #+#    #+#             */
/*   Updated: 2023/07/16 20:19:07 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	top_line(int x)
{
	if (x > 1)
	{
		ft_putchar('/');
		while (x > 2)
		{
			ft_putchar('*');
			x--;
		}
		ft_putchar ('\\');
	}
	else
		ft_putchar ('/');
	write(1, "\n", 1);
}

void	mid_line(int x)
{
	if (x > 1)
	{
		ft_putchar('*');
		while (x > 2)
		{
			ft_putchar(' ');
			x--;
		}
		ft_putchar('*');
	}
	else
		ft_putchar('*');
	write(1, "\n", 1);
}

void	buttom_line(int x)
{
	if (x > 1)
	{
		ft_putchar('\\');
		while (x > 2)
		{
			ft_putchar('*');
			x--;
		}
		ft_putchar('/');
	}
	else
		ft_putchar('\\');
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		if (y > 1)
		{
			top_line(x);
			while (y > 2)
			{
				mid_line(x);
				y--;
			}
			buttom_line(x);
		}
		else
		{
			top_line(x);
		}
	}
	else
	{
		write(1, "X and Y should be superior than 0", 33);
	}
}
