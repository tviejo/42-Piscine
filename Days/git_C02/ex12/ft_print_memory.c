/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:26:38 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/18 16:34:31 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{		
	write(1, &a, 1);
}

void	ft_putstr(char *str, int size, int mode)
{
	int	counter;

	counter = 0;
	if (str[counter] != '\0' && str[counter + 1] == '\0' && mode == 1)
	{
		ft_putchar('0');
		ft_putchar((unsigned char)str[counter]);
		return ;
	}
	while (counter < size)
	{
		if ((str[counter] < 32 || str[counter] > 126))
		{
			ft_putchar('.');
		}
		else
		{
			ft_putchar((unsigned char)str[counter]);
		}
		counter++;
	}
}

void	ft_putbase(unsigned long int nb, char *hexa, unsigned int *size_address)
{	
	if (nb > 15)
	{
		ft_putbase(nb / 16, hexa, size_address);
		if ((nb % 16) <= 9)
			hexa[*size_address] = (nb % 16 + '0');
		else
			hexa[*size_address] = (nb % 16 + 'a' - 10);
		*size_address = *size_address + 1;
	}
	else
	{
		if ((nb % 16) <= 9)
			hexa[*size_address] = (nb % 16 + '0');
		else
			hexa[*size_address] = (nb % 16 + 'a' - 10);
		*size_address = *size_address + 1;
	}
	hexa[*size_address] = '\0';
}

void	ft_print_all(char *str, unsigned int size)
{
	unsigned long int		address;
	unsigned int			counter;
	unsigned int			size_address;
	char					hexa[100000];
	char					hexa2[100000];

	size_address = 0;
	address = (unsigned long int)str;
	ft_putbase(address, hexa, &size_address);
	write(1, "0000000000000000", 16 - size_address);
	ft_putstr(hexa, size_address, 0);
	write(1, ": ", 2);
	counter = 0;
	while (counter < size)
	{
		size_address = 0;
		ft_putbase((unsigned char)str[counter], hexa2, &size_address);
		ft_putstr(hexa2, 2, 1);
		if (counter % 2)
			ft_putchar(' ');
		counter ++;
	}
	counter = counter * 2 + counter / 2;
	write(1, "                                        ", 40 - counter);
}

void	*ft_print_memory(char *addr, unsigned int size)
{
	unsigned int	counter;
	unsigned int	toggle;
	unsigned int	nb_bit;

	if (size == 0)
	{
		return (addr);
	}
	counter = 0;
	toggle = 0;
	while (counter < size)
	{
		nb_bit = size - counter;
		if (nb_bit > 16)
			nb_bit = 16;
		ft_print_all(&addr[counter], nb_bit);
		ft_putstr(&addr[counter], nb_bit, 0);
		ft_putchar('\n');
		counter = counter + 16;
	}
	return (addr);
}
/*
#include <stdio.h>
int     main(void)
{
	char test1[] = "azerty azerty\nazerty azerty" ;
	char test2[] = {255} ;
	printf("%p\n",test1);
	ft_print_memory(test1, 60000);
	ft_print_memory(test1, 20);
	ft_print_memory(test1, 0);
	ft_print_memory(test2, 1);
        return (0);
}
*/
