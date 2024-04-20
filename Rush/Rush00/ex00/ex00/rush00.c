/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:22:03 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/11 20:27:03 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_line1(int x)
{
	int	countx;

	countx = 2;
	ft_putchar('o');
	while (countx < x)
	{
		ft_putchar('-');
		countx++;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
}

void	ft_line2(int x)
{
	int	countx;

	countx = 2;
	ft_putchar('|');
	while (countx < x)
	{
		ft_putchar(' ');
		countx++;
	}
	if (x > 1)
	{
		ft_putchar('|');
	}
}

void	rush(int x, int y)
{
	int	county;

	county = 1;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (county <= y)
	{
		if (county == 1 || county == y)
		{
			ft_line1(x);
		}
		else
		{
			ft_line2(x);
		}
		ft_putchar('\n');
		county++;
	}
}
