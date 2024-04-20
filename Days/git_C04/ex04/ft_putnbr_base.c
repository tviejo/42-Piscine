/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:48:06 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/22 15:33:19 by tviejo           ###   ########.fr       */
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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putbase(int nb, int sizeb, char *base)
{
	if (nb == -2147483648)
	{
		ft_putbase(nb / sizeb, sizeb, base);
		ft_putchar(base[nb % sizeb]);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putbase(-nb, sizeb, base);
	}
	else if (nb > sizeb - 1)
	{
		ft_putbase(nb / sizeb, sizeb, base);
		ft_putchar(base[nb % sizeb]);
	}
	else
	{
		ft_putchar(base[nb % sizeb]);
	}
}

int	ft_verif_base(char *base)
{
	int	sizeb;
	int	i;
	int	j;

	sizeb = ft_strlen(base);
	if (sizeb <= 1)
		return (0);
	i = 0;
	while (i < sizeb - 1)
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (j < sizeb)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		sizeb;

	if (ft_verif_base(base) == 1)
	{
		sizeb = ft_strlen(base);
		ft_putbase(nbr, sizeb, base);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr_base(-100,"0123456789abcdef");
	printf("\n");
	ft_putnbr_base(65,"01");
	printf("\n");
	ft_putnbr_base(-2147483648,"01");
	printf("\n");
	ft_putnbr_base(-2147483648,"0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(65,"");
}
*/
