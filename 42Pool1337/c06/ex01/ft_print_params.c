/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:42:00 by zouddach          #+#    #+#             */
/*   Updated: 2023/07/27 10:57:05 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pp(char **av)
{
	int	i;

	i = 0;
	while (av[0][i])
	{
		write(1, &av[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 1)
		return (0);
	while (i < argc)
	{
		pp(&argv[i]);
		i++;
	}
}
