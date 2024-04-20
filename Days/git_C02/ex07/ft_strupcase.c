/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:26:38 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/13 13:29:01 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 97 && str[counter] <= 122)
		{
			str[counter] = str[counter] - 32;
		}
		else
			str[counter] = str[counter];
		counter++;
	}
	return (str);
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

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int     main(void)
{
        char test1[4] = {'Q', 'a','R','Q'};
	char *test2;

        test2 = ft_strupcase(test1);
        ft_putstr(test2);
        return (0);
}
*/
