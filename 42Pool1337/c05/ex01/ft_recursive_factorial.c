/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 21:05:43 by zouddach          #+#    #+#             */
/*   Updated: 2023/07/22 21:25:12 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	value;

	value = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 0)
	{
		value = nb * value * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (value);
}
