/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 19:48:50 by zouddach          #+#    #+#             */
/*   Updated: 2023/07/22 19:55:15 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	value;

	value = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		value = nb * value;//=6
		nb--;
	}
	return (value);
}
