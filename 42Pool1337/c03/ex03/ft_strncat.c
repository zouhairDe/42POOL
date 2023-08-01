/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:59:41 by zouddach          #+#    #+#             */
/*   Updated: 2023/07/20 15:31:08 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	h;

	i = 0;
	h = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[h] != '\0') && h < nb)
	{
		dest[i] = src[h];
		h++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
