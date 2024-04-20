/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:07:33 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/18 13:12:53 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_tab(int tabl[6][6])
{
	int		col;
	int		line;
	char	c;

	col = 1;
	line = 1;
	while (line <= 4)
	{
		col = 1;
		while (col <= 4)
		{
			c = tabl[line][col] + '0';
			write(1, &c, 1);
			if (col < 4)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		line++;
	}
}
