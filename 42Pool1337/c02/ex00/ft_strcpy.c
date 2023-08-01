/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 22:39:47 by zouddach          #+#    #+#             */
/*   Updated: 2023/07/18 23:20:18 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(){
    char c[] = "hello";
    char to[] = "";
    ft_strcpy(to,c);
    int i = 0;
    while (to[i] != '\0')
    {
        write(1, &to[i], 1);
        i++;
    }
}
*/
