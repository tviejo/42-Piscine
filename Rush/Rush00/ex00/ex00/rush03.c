/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:22:03 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/11 20:36:58 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_line1(int x)
{
	int	countx;

	countx = 2;
	ft_putchar('A');
	while (countx < x)
	{
		ft_putchar('B');
		countx++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
}

void	ft_line2(int x)
{
	int	countx;

	countx = 2;
	ft_putchar('B');
	while (countx < x)
	{
		ft_putchar(' ');
		countx++;
	}
	if (x > 1)
	{
		ft_putchar('B');
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
