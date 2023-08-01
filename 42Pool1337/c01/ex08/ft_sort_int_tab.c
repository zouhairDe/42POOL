/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:37:23 by zouddach          #+#    #+#             */
/*   Updated: 2023/07/31 14:16:11 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = i;
		while (j > 0 && *(tab + j - 1) > *(tab + j))
		{
			swap (tab + j, tab + j - 1);
			j--;
		}
		i++;
	}
}
/*
int main()
{
    int i[] = {1, 3, 6, 0, 7, 9};
    int t = 0;
    ft_sort_in_tab(i, 6);
    while (t < 6)
    {
        printf("%d ", i[t]);
        t++;
    }
}
*/
