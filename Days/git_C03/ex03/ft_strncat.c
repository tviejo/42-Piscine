/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:19:15 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/13 18:17:09 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *scr, unsigned int nb)
{
	unsigned int	counter_dest;
	unsigned int	counter_scr;

	counter_dest = 0;
	while (dest[counter_dest] != '\0')
	{
		counter_dest++;
	}
	counter_scr = 0;
	while (scr[counter_scr] != '\0' && counter_scr < nb)
	{
		dest[counter_dest] = scr[counter_scr];
		counter_scr++;
		counter_dest++;
	}
	dest[counter_dest] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
        char    s1[] = "DEF";
        char    s2[] = "ABC";
	char	*s3;

        s3 = ft_strncat(s2, s1, 2);
        printf("%s", s3);
}
*/
