/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:23:50 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/29 17:52:17 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_charset(char a, char *charset)
{
	int	i;

	i = 0;
	if (charset != NULL)
	{
		while (charset[i] != '\0')
		{
			if (charset[i] == a)
				return (1);
			i++;
		}
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

char	*ft_copy_line(char *str, int len_words)
{
	char	*line;
	int		k;

	line = malloc((len_words + 1) * sizeof(char));
	if (line == 0)
		return (0);
	k = 0;
	while (k < len_words)
	{
		line[k] = str[k];
		k++;
	}
	line[k] = '\0';
	return (line);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**output;
	int		len_words;

	if (!str)
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
			output[j++] = ft_copy_line(&str[i], len_words);
			i += len_words;
		}
		else
			i++;
	}
	output[j] = NULL;
	return (output);
}
/*
int	main(void)
{
	char	*str = "//////\n///fhed//////efhf\neqijfhriebf////,////eiwfh///\n";
	char	charset[] = "/\n";
	char	**output;
	int	i;

//	outputi = ft_count_words(str, charset);
//	printf("%d" , outputi);
//	output = ft_len_words(str, charset);
//      printf("%d" , output);
      
	output = ft_split(str, "");
	i = 0;
	while (output[i] != NULL)
	{
        	printf("[%s]\n" , output[i]);
		i++;
	}
}
*/
