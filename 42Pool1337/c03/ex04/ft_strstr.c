/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:58:01 by zouddach          #+#    #+#             */
/*   Updated: 2023/07/24 15:00:38 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	j = 0;
	while (str[j] != '\0')
	{
		i = 0;
		while (str[i + j] == to_find[i])
		{
			if (to_find[i + 1] == '\0')
				return (str + j);
			else
				i++;
		}
		j++;
	}
	return (0);
}
