/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:19:15 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/14 12:47:07 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (*str != '\0')
	{
		str ++;
		cpt ++;
	}
	return (cpt);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	counter_src;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dest)
		return (len_src + size);
	else
	{
		counter_src = 0;
		while (src[counter_src] != '\0' && (len_dest + counter_src) < size - 1)
		{
			dest[len_dest + counter_src] = src[counter_src];
			counter_src++;
		}
	}
	dest[len_dest + counter_src] = '\0';
	return (len_dest + len_src);
}
/*
#include <stdio.h>
int main(void)
{
        int     result;
        char    s1[] = "DEFGH";
        char    s2[] = "ABCZZZZ";

        result = ft_strlcat(s2, s1, 5);
        printf("%d", result);
}
*/
