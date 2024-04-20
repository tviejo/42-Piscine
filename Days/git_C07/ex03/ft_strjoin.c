/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:51:41 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/27 17:01:42 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (*str != '\0')
	{
		str ++;
		cpt ++;
	}
	return (cpt);
}

char	*ft_cpy(int size, char **strs, char *sep, char *result)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = -1;
	k = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
		{
			result[k] = strs[i][j];
			k++;
		}
		l = -1;
		while (sep[++l] != '\0' && i < size - 1)
		{
			result[k] = sep[l];
			k++;
		}
	}
	result[k] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		size_malloc;
	char	*result;

	if (size == 0)
	{
		result = malloc((1) * sizeof(char));
		result[0] = '\0';
		return (result);
	}
	i = 0;
	size_malloc = 0;
	while (i < size)
	{
		size_malloc += ft_strlen(strs[i]);
		i++;
	}
	size_malloc += (size - 1) * ft_strlen(sep);
	result = malloc((size_malloc + 1) * sizeof(char));
	if (result == NULL)
		return (result);
	result = ft_cpy(size, strs, sep, result);
	return (result);
}
/*
#include <stdio.h>
int     main(int argc, char **argv)
{
        char	*result;

        result = ft_strjoin(0, argv, ", ");
        printf("%s", result);
	free(result);
}
*/
