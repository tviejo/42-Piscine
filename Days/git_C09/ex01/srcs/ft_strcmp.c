/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:55:44 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/13 18:05:55 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] != 0 || s2[counter] != 0)
	{
		if (s1[counter] == s2[counter])
		{
			counter ++;
		}
		else
		{
			return (s1[counter] - s2[counter]);
		}
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	int	result;
	char	s1[] = "ABCD";
	char	s2[] = "";

	result = ft_strcmp(s1, s2);
	printf("%d", result);
}
*/
