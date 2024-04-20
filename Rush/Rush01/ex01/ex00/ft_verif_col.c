/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_col.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:22:16 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/18 14:36:20 by imounjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_verif_col_0(int tableau[6][6], int col)
{
	int	i;
	int	last_bigger;
	int	view;

	i = 1;
	last_bigger = 0;
	view = 0;
	while (i <= 5)
	{
		if (tableau[i][col] > last_bigger)
		{
			last_bigger = tableau[i][col];
			view ++;
		}
		i++;
	}
	if (view == tableau[0][col])
		return (1);
	return (0);
}

int	ft_verif_col_5(int tableau[6][6], int col)
{
	int	i;
	int	last_bigger;
	int	view;

	i = 4;
	last_bigger = 0;
	view = 0;
	while (i >= 1)
	{
		if (tableau[i][col] > last_bigger)
		{
			last_bigger = tableau[i][col];
			view ++;
		}
		i--;
	}
	if (view == tableau[5][col])
		return (1);
	return (0);
}

int	ft_verif_col(int tableau[6][6], int col)
{
	int	result;
	int	somme;

	somme = tableau[1][col] + tableau[2][col];
	somme = somme + tableau[3][col] + tableau[4][col];
	if (somme != 10)
		return (0);
	result = 0;
	result = result + ft_verif_col_0(tableau, col);
	result = result + ft_verif_col_5(tableau, col);
	if (result == 2)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int tableau[6][6] = {{0,1,2,3,2,0},{1,4,3,2,1,4},{3,2,1,3,4,1},
	{3,1,2,4,3,2},{2,3,4,1,2,2},{0,2,1,2,3,0}};
	printf("%d", ft_verif_col(tableau,4));
	return (0);
}
*/
