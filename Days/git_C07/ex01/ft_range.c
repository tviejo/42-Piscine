/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:42:09 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/27 10:49:56 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			*ptr;
	long int	i;
	long int	size;

	if (min >= max)
	{
		ptr = NULL;
		return (ptr);
	}
	size = max - min;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	int	min;
	int	max;
	long int	i;
	long int	size;
	int	*ptr;

	min = 20;
	max = 20;
	size = max - min;
	ptr = ft_range(min, max);
        if (ptr == NULL)
                return (0);
	i = 0;
        while (i < size)
        {
                printf("%i\n", ptr[i]);
                i++;
        }
	free(ptr);
}
*/
