/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 23:26:15 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/29 00:19:04 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strcpy(char *dest, char *src)
{
	unsigned int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter ++;
	}
	dest[counter] = '\0';
	return (ft_strlen(src));
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*ptr;

	size = ft_strlen(src);
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr != NULL)
		ft_strcpy(ptr, src);
	return (ptr);
}

void	free_array(t_stock_str **array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free((*array)[i].copy);
		(*array)[i].copy = NULL;
		++i;
	}
	free(*array);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*output;

	output = (t_stock_str *)malloc((ac + 1) * (sizeof(t_stock_str)));
	if (output == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		output[i].size = ft_strlen(av[i]);
		output[i].str = av[i];
		output[i].copy = ft_strdup(av[i]);
		if (output[i].copy == NULL)
		{
			free_array(&output, i);
			return (NULL);
		}
		i++;
	}
	return (output);
}
/*
int	main(int argc, char **argv)
{
	int	i;
	struct s_stock_str *output;

	output = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		printf("%d\n", output[i].size);
		printf("%s\n", output[i].str);
                printf("%s\n\n", output[i].copy);
		i++;
	}
}
*/
