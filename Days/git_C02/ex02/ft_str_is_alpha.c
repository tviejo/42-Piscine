/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:26:38 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/13 13:15:58 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 65 && str[counter] <= 90)
		{
			counter++;
		}
		else if (str[counter] >= 97 && str[counter] <= 122)
		{
			counter++;
		}
		else
			return (0);
	}
	return (1);
}
/*
#include <unistd.h>
void    ft_putstr(char *str)
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
        char test1[11] = {'a','+','a','a','a','q','e','d','a','d','a'};
	int test3;

        test3 = ft_str_is_alpha(test1);
        ft_putchar(test3 + 48);
        return (0);
}
*/
