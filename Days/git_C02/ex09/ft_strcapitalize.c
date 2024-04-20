/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:26:38 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/13 13:36:47 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_str_low_car(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 65 && str[counter] <= 90)
		{
			str[counter] = str[counter] + 32;
		}
		else
			str[counter] = str[counter];
		counter++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	counter;
	int	toggle;

	counter = 0;
	toggle = 1;
	str = ft_str_low_car(str);
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 97 && str[counter] <= 122) && toggle == 1)
		{
			str[counter] = str[counter] - 32;
			toggle = 0;
		}
		else if (!(str[counter] >= 65 && str[counter] <= 90)
			&& !(str[counter] >= 97 && str[counter] <= 122)
			&& !(str[counter] >= 48 && str[counter] <= 57))
		{
			toggle = 1;
		}
		else
			toggle = 0;
		counter++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots	quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s",str);
}
*/
