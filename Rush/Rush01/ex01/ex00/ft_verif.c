/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:22:16 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/18 12:17:21 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_verif_col(int tableau[6][6], int col);
int	ft_verif_li(int tableau[6][6], int li);

int	ft_verif_tab(int tableau[6][6])
{
	int	i;
	int	result;
	int	result_total;

	i = 1;
	result_total = 0;
	while (i <= 4)
	{
		result = ft_verif_col(tableau, i);
		if (result == 1)
			result_total++;
		i++;
	}
	i = 1;
	while (i <= 4)
	{
		result = ft_verif_li(tableau, i);
		if (result == 1)
			result_total++;
		i++;
	}
	if (result_total == 8)
		return (1);
	return (0);
}

int	ft_verif_case(int tableau[6][6], int li, int col, int num)
{
	int	result;
	int	result_total;

	result_total = 0;
	tableau[li][col] = num;
	result = ft_verif_col(tableau, col);
	if (result == 1)
		result_total++;
	result = ft_verif_li(tableau, li);
	if (result == 1)
		result_total++;
	if (result_total == 2)
		return (1);
	tableau[li][col] = 0;
	return (0);
}
/*
int	main(void)
{
	int tableau[6][6] = {{0,1,2,3,2,0},{1,4,3,2,1,4},{3,2,1,3,4,1},
	{3,1,2,4,3,2},{2,3,4,1,2,2},{0,2,1,2,3,0}};
	printf("%d", ft_verif_case(tableau, 1, 1));
	return (0);
}
*/
