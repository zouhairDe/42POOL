/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:03:06 by zouddach          #+#    #+#             */
/*   Updated: 2023/07/21 12:49:23 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] <= 'Z' && str[i] >= 'A')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
