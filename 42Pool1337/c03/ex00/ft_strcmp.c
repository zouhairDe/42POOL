/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:06:38 by zouddach          #+#    #+#             */
/*   Updated: 2023/07/19 13:13:36 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}
/*
int main()
{
    char str1[] = "abcdz", str2[] = "abcd", str3[] = "abcd0";
    int result;

    result = ft(str1, str2);
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
