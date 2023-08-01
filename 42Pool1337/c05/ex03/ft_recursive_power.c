/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:51:06 by zouddach          #+#    #+#             */
/*   Updated: 2023/07/26 13:03:51 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	os;

	os = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	return (os);
}
