/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:55:44 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/15 14:49:46 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (s1[counter] != '\0' && s2[counter] != '\0'
		&& counter < n && s1[counter] == s2[counter])
		counter++;
	if (counter == n)
		return (0);
	return (s1[counter] - s2[counter]);
}
/*
#include <stdio.h>
int main(void)
{
	char	s1[] = "ABCD";
	char	s2[] = "ABCD";
	char    s3[] = "AB";
	char    s4[] = "ABCDE";
	char    s5[] = "ABCE";
	char    s6[] = "ABCE";

	printf("%d", ft_strncmp(s1, s2, 4));
	printf("%d", ft_strncmp(s1, s3, 4));
	printf("%d", ft_strncmp(s1, s4, 5));
	printf("%d", ft_strncmp(s1, s5, 4));
	printf("%d", ft_strncmp(s1, s6, 3));
}
*/
