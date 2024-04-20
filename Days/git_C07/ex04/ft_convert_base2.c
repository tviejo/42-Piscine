/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:48:06 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/27 16:40:59 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != '\0')
		cpt ++;
	return (cpt);
}

int	ft_verif_base(char *base)
{
	int	sizeb;
	int	i;
	int	j;

	sizeb = ft_strlen(base);
	if (sizeb <= 1)
		return (0);
	i = 0;
	while (i < sizeb)
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (j < sizeb)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	verify_nbr_base(char str, char *base)
{
	int	i;

	i = 0;
	while (i < ft_strlen(base))
	{
		if (str == base[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

long int	ft_change_base(char *str, int cpt, char *base)
{
	long int	value;

	value = 0;
	while (str[cpt] != '\0')
	{
		if (verify_nbr_base(str[cpt], base) >= 0)
		{
			value = value * ft_strlen(base) + verify_nbr_base(str[cpt], base);
		}
		else
			break ;
		cpt++;
	}
	return (value);
}

int	ft_atoi_base(char *str, char *base)
{
	int			cpt;
	int			sign;
	long int	value;

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
	value = ft_change_base(str, cpt, base);
	return ((int)(value * sign));
}
/*
int	main(void)
{
	int	result;
	result = ft_atoi_base(" 100k5","0123456789abcdef");
	printf("%d", result);
}
*/
