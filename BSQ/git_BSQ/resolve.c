/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:03:23 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/27 22:26:00 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "my_header.h"

void	ft_print(char **tab, t_square *biggest, t_character *chara);
void	ft_putchar(char a);

int	ft_test_square(char **tab, int i, int j, t_character *chara)
{
	int	x;
	int	y;
	int	k;

	k = 1;
	while (k < chara->nb_ligne - i && k < chara->nb_col - j)
	{
		x = 0;
		while (x <= k && x + i < chara->nb_ligne)
		{
			y = 0;
			while (y <= k && y + j < chara->nb_col)
			{
				if (tab[x + i][y + j] == chara->obstacle)
				{
					return (k);
				}
				y++;
			}
			x++;
		}
		k++;
	}
	return (k);
}

void	resolve(char **tab, t_square *biggest, t_character *chara)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	while (i < chara->nb_ligne)
	{
		j = 0;
		while (j < chara->nb_col)
		{
			size = ft_test_square(tab, i, j, chara);
			if (size > biggest->size)
			{
				biggest->size = size;
				biggest->x = i;
				biggest->y = j;
			}
			j++;
		}
		i++;
	}
}

int     main(int argc, char **argv)
{
        t_square biggest;
        t_character chara;

        biggest.x = -1;
        biggest.y = -1;
        biggest.size = 0;
        chara.empty = 'o';
	chara.obstacle = 'i';
	chara.full = 'X';
	chara.nb_ligne = 6;
	chara.nb_col = 10;
	
	char **tab;
	tab = &argv[1];
	ft_print(tab, &biggest, &chara);
	printf("\n");
	resolve(tab, &biggest, &chara);
	ft_print(tab, &biggest, &chara);
	return (0);
}
