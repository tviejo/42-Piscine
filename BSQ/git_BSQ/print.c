/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:36:17 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/27 16:10:06 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "my_header.h"
#include <stdio.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

char	**ft_add_square(char **tab, t_square *biggest, t_character *chara)
{
	int	i;
	int	j;

	i = biggest->x;
	while (i < biggest->size + biggest->x)
	{
		j = biggest->y;
		while (j < biggest->size + biggest->y)
		{
			tab[i][j] = chara->full;
			j++;
		}
		i++;
	}
	return (tab);
}

void	ft_print(char **tab, t_square *biggest, t_character *chara)
{
	int	i;
	int	j;

	tab = ft_add_square(tab, biggest, chara);
	i = 0;
	while (tab[i] != 0)
	{
		j = 0;
		while (tab[i][j] != 0)
		{
			write(1, &tab[i][j], 1);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
/*
int	main(int argc, char **argv)
{
	char	**tab;
	t_square biggest;
	t_character chara;

	biggest.x = 1;
	biggest.y = 0;
	biggest.size = 3;
	chara.full = 'X';
	tab = &argv[1];
	
	ft_print(tab, biggest, chara);
}
*/
