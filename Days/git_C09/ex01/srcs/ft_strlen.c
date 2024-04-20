/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:39:16 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/14 15:46:03 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "abcdefw";
	printf("%d",ft_strlen(str));
}
*/
