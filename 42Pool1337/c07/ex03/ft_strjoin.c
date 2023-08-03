/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:05:01 by zouddach          #+#    #+#             */
/*   Updated: 2023/08/03 13:47:45 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strslen(int size, char **strs, char *sep)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	len += i * (size - 1);
	return (len);
}

char	*returni(char **strs, char *str, char *sep, int size)
{
	int	i;
	int	g;
	int	x;

	i = 0;
	g = 0;
	x = 0;
	while (i <= size - 1)
	{
		g = 0;
		while (*strs[i])
		{
			str[x] = *strs[i];
			strs[i]++;
			x++;
		}
		while (sep[g] && i < size - 1)
		{
			str[x] = sep[g];
			g++;
			x++;
		}
		i++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		g;
	char	*str;

	if (size == 0)
		g = 0;
	else
		g = ft_strslen(size, strs, sep);
	str = malloc(g + 1);
	str[g] = '\0';
	if (!str || g == 0)
		return (str);
	return (returni(strs, str, sep, size));
}
/*
int main()
{
	char *language[5] = {"Java", "Python", "C++", "HTML", "SQL"};
	char *x = ft_strjoin(5, language, "-	 -");
	printf("%s\n", x);
	return 0;
}
*/
