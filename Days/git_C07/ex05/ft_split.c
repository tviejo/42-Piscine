/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:23:50 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/25 19:56:32 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char a, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == a)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	nb_words;
	int	i;

	nb_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && ft_is_charset(str[i], charset) == 0)
			nb_words++;
		else if (ft_is_charset(str[i], charset) == 1
			&& ft_is_charset(str[i + 1], charset) == 0 && str[i + 1] != '\0')
		{
			nb_words++;
		}
		i++;
	}
	return (nb_words);
}

int	ft_len_words(char *str, char *charset)
{
	int	i;
	int	len_words;

	len_words = 0;
	i = 0;
	while (str[i] != '\0' && ft_is_charset(str[i], charset) == 0)
	{
		len_words++;
		i++;
	}
	return (len_words);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**output;
	int		len_words;

	if (str == NULL || charset == NULL)
		return (0);
	output = malloc((ft_count_words(str, charset) + 1) * sizeof(char *));
	if (output == 0)
		return (0);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (ft_is_charset(str[i], charset) != 1)
		{
			len_words = ft_len_words(&str[i], charset);
			output[j] = malloc((len_words + 1) * sizeof(char));
			if (output[j] == 0)
				return (0);
			k = -1;
			while (++k < len_words)
			{
				output[j][k] = str[i];
				i++;
			}
			output[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	output[j] = 0;
	return (output);
}
/*
int	main(void)
{
	char	str[] = "qwertyIqw,ertyIIIIIIIIIIIIIqwertyIIII";
	char	charset[] = "I,";
	char	**output;
	int	outputi;

//	outputi = ft_count_words(str, charset);
//	printf("%d" , outputi);
//	output = ft_len_words(str, charset);
//      printf("%d" , output);
      
	output = ft_split(str, charset);
        printf("%s" , output[0]);
	printf("\n%s" , output[1]);
	printf("\n%s" , output[2]);
	printf("\n%s" , output[3]);
}
*/
