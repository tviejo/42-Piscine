/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:26:38 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/18 13:38:55 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define HEXA "0123456789abcdef"

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str ++;
	}
}

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

void	print_hexa(unsigned char nb)
{
	ft_putchar(HEXA[nb / 16]);
	ft_putchar(HEXA[nb % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	counter;
	int	size_str;

	size_str = ft_strlen(str);
	counter = 0;
	while (counter < size_str)
	{
		if (str[counter] >= 32 && str[counter] <= 126)
			ft_putchar(str[counter]);
		else
		{
			ft_putchar(92);
			print_hexa(str[counter]);
		}
		counter++;
	}
}

int     main(void)
{
//        char test1[100] = {'a', '€', 'a', 1};

        ft_putstr_non_printable("gnfdjkgdjk€ggsg");
        return (0);
}
