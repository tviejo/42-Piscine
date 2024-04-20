/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:19:15 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/12 16:28:36 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *scr)
{
	int	counter_dest;
	int	counter_scr;

	counter_dest = 0;
	while (dest[counter_dest] != '\0')
	{
		counter_dest++;
	}
	counter_scr = 0;
	while (scr[counter_scr] != '\0')
	{
		dest[counter_dest] = scr[counter_scr];
		counter_scr++;
		counter_dest++;
	}
	dest[counter_dest] = '\0';
	return (dest);
}
/*
int main(void)
{
        int     result;
        char    s1[] = "DEF";
        char    s2[] = "ABC";
	char	*s3;

        s3 = ft_strcat(s2, s1);
        printf("%s", s3);
}
*/
