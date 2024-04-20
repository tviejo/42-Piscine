/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_li.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:22:16 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/18 14:36:53 by imounjed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_verif_li_0(int tableau[6][6], int li)
{
	int	i;
	int	last_bigger;
	int	view;

	i = 1;
	last_bigger = 0;
	view = 0;
	while (i <= 5)
	{
		if (tableau[li][i] > last_bigger)
		{
			last_bigger = tableau[li][i];
			view ++;
		}
		i++;
	}
	if (view == tableau[li][0])
		return (1);
	return (0);
}

int	ft_verif_li_5(int tableau[6][6], int li)
{
	int	i;
	int	last_bigger;
	int	view;

	i = 4;
	last_bigger = 0;
	view = 0;
	while (i >= 1)
	{
		if (tableau[li][i] > last_bigger)
		{
			last_bigger = tableau[li][i];
			view ++;
		}
		i--;
	}
	if (view == tableau[li][5])
		return (1);
	return (0);
}

int	ft_verif_li(int tableau[6][6], int li)
{
	int	result;
	int	somme;

	result = 0;
	somme = tableau[li][1] + tableau[li][2];
	somme = somme + tableau[li][3] + tableau[li][4];
	if (somme != 10)
		return (0);
	result = result + ft_verif_li_0(tableau, li);
	result = result + ft_verif_li_5(tableau, li);
	if (result == 2)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int tableau[6][6] = {{0,1,2,3,2,0},{1,4,3,2,1,4},{3,2,1,3,4,1},
	{3,1,2,4,3,2},{2,3,4,1,2,2},{0,2,1,2,3,0}};
	printf("%d", ft_verif_li(tableau,1));
	return (0);
}
*/
