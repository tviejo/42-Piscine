/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:42:09 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/27 10:47:26 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	size;
	int		*range;

	min = 100;
	max = 150;
	size = ft_ultimate_range(&range, min, max);
        if (range == NULL)
                return (0);
	i = 0;
        while (i < size)
        {
                printf("%i\n", range[i]);
                i++;
        }
	printf("\n%d", size);
	free(range);
}
*/
