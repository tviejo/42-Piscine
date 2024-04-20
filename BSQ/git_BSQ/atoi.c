/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:02:14 by tchobert          #+#    #+#             */
/*   Updated: 2024/02/26 15:18:55 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ASCII_ZERO 48
#include <stdbool.h>
#include <stdlib.h>

bool	is_digit(char c)
{
	return (c >= '1' && c <= '9');
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		nb_converti;

	i = 0;
	while (is_digit(str[i]) == true)
	{
		nb_converti = nb_converti * 10 + (str[i] - ASCII_ZERO);
		++i;
	}
	return (nb_converti);
}
