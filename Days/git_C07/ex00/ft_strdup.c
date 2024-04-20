/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:42:09 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/25 12:16:39 by tviejo           ###   ########.fr       */
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
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "qwerty";
	char	*ptr;


	ptr = ft_strdup(src);
	if (ptr == NULL)
                return (0);
	printf("%s", ptr);
	free(ptr);
}
*/
