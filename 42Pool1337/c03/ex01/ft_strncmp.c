/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:05:10 by zouddach          #+#    #+#             */
/*   Updated: 2023/07/19 20:35:18 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/*

int main()
{
    char str1[] = "abcdz", str2[] = "63962679777", str3[] = "abcd0";
    int result;

    result = ft_strncmp(str1, str2, 3);
    int tfo = result;

    int index = 1;
    while(tfo / 10)
    {
    	index *= 10;
        tfo /= 10;
    }
    while(index)
    {
    	char str= (result / index) + '0';
        write(1, &str, 1);
        result %= 10;
        index  /= 10;
    }
    return 0;
}
*/
