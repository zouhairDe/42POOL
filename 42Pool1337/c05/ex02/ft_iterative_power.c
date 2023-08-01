/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:33:32 by zouddach          #+#    #+#             */
/*   Updated: 2023/07/26 13:02:55 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	os;

	os = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		os *= nb;
		power--;
	}
	return (os);
}
