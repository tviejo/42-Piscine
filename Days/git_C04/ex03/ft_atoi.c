/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:02:58 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/22 14:16:16 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	cpt;
	int	sign;
	int	value;

	cpt = 0;
	value = 0;
	sign = 1;
	while ((str[cpt] == ' ' || (9 <= str[cpt] && str[cpt] <= 13)))
		cpt++;
	while (str[cpt] == '-' || str[cpt] == '+')
	{
		if (str[cpt] == '-')
			sign *= -1;
		cpt++;
	}
	while ('0' <= str[cpt] && str[cpt] <= '9')
	{
		value = (value * 10) + (str[cpt] - '0');
		cpt++;
	}
	return (value * sign);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("---- ---15"));
	printf("%d\n", ft_atoi("-----+15"));
	printf("%d\n", ft_atoi("-----+152 566"));
	printf("%d\n", ft_atoi("-----+152a566"));
	printf("%d\n", ft_atoi("            	\v 52	566"));
	printf("%d\n", ft_atoi("52566"));
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", ft_atoi("-0"));
	printf("%d\n", ft_atoi(""));
}
*/
