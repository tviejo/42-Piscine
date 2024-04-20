/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:44:57 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/15 14:31:52 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *scr, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (scr[counter] != '\0' && counter < n)
	{
		dest[counter] = scr[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
/*
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str ++;
	}
}

int     main(void)
{
        char test1[] = "abcdefg";
        char test2[] = "hijklmn";
        char *test3;

        test3 = ft_strncpy(test1, test2, 5);
	ft_putstr(test3);
	test3 = ft_strncpy(test1, test2, 0);
	ft_putstr(test3);
	test3 = ft_strncpy(test1, test2, 10);
        ft_putstr(test3);
        return (0);
}
*/
