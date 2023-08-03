/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:53:58 by zouddach          #+#    #+#             */
/*   Updated: 2023/08/03 13:27:30 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		j;
	int		*arr;

	j = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * j);
	if (arr == NULL)
		return (-1);
	else
	{
		i = 0;
		while (i < j)
		{
			arr[i] = min + i;
			i++;
		}
		*range = arr;
		return (i);
	}
}
