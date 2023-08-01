/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:34:38 by zouddach          #+#    #+#             */
/*   Updated: 2023/07/18 19:49:08 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
void ftp(char c)
{
    write(1, &c, 1);
}

void ftchar(int tab)
{
    char nbr = tab + 48;
    ftp(nbr);
}

int main ()
{
    int arr[5] = {0,1,2,3,4};
    ft_rev_int_tab(arr, 5);
    int i = 0;
    while(i < 4)
    {
        ftchar(arr[i]);
        i++;
    }
}
*/
