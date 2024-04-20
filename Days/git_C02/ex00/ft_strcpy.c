/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:31:53 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/10 19:44:10 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *scr)
{
	int	counter;

	counter = 0;
	while (scr[counter] != '\0')
	{
		dest[counter] = scr[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
/*
void    ft_putstr(char *str)
{
        while (*str != '\0')
        {
                write(1, str, 1);
                str ++;
        }
}

int	main(void)
{
	char test1[11];
	char test2[11];
	char *test3;
	int cpt;

	cpt=0;
	while(cpt < 10)
        {
                test1[cpt] = 'a';
		cpt++;
        }
	test1[cpt] = '\0';
	cpt=0;
        while(cpt < 10)
        {
                test2[cpt] = 'b';
                cpt++;
        }
	test2[cpt] = '\0';
	test3 = ft_strcpy(test1, test2);
	ft_putstr(test3);
	return (0);
}
*/
