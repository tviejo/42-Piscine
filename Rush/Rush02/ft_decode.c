/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decode.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:26:20 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/24 23:03:43 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *nbr)
{
	int	i;
	int	cent;
	int	mil;

	i = 0;
	while (nbr[i] != '\0')
		i++;
//	cent = i / 4;
//	mil = i / 4;
//	i = i + cent + mil;
	return (i);
}

char	*ft_decode_th(char th, int i)
{
	int	j;
	char 	*output1;

	output1 = malloc((i + 1) * sizeof(char));
        if (output1 == NULL)
                return (NULL);
	output1[0] = '1';
	j = 1;
	while (j <= i)
	{
		output1[j] = '0';
		j++;
	}
	output1[j] = '\0';
	return (output1);
}

char    *ft_decode_hu(char th)
{
        int     j;
	char	*output2;

	output2 = malloc(3 * sizeof(char));
        if (output2 == NULL)
                return (NULL);
        output2[0] = th;
        output2[1] = '0';
        output2[2] = '\0';
        return (output2);
}


char	**ft_decode(char *nbr)
{
	int	i;
	int	j;
	char	**output;
	int	toogle;
	int	size;

	size = ft_strlen(nbr);
	output = malloc((size * 2) * sizeof(char));
	if (output == NULL)
		return (NULL);
	i = 0;
	j = size -1;
	while (i <= size - 1)
	{
		output[j] = malloc(30 * sizeof(char*));
		if (output[j] == NULL)
                	return (NULL);
		if (i % 3 == 0)
		{
			output[j] = ft_decode_th(nbr[i], i);
		}
		else if (i % 2 == 0)
                {
          		output[j] = ft_decode_hu(nbr[i]);
			j--;
                }
		else
		{
			output[j][0] = nbr[i];
			output[j][1] = '\0';
		}
		i++;
		j--;
	}
	return (output);
}

int	main(void)
{
	char **output;
	char *nbr = "1234";
	int	i;
	int	j;

	output = ft_decode(nbr);
	i = 0;
	while(i < 4)
	{
		j = 0;
		printf("\n");
		while (output[i][j] != '\0')
		{
			printf("%c", output[i][j]);
			j++;
		}
		i++;
	}
}		
