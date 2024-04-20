/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_std_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:25:14 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/27 22:41:35 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#define MAX_READ_LEN 150

char	*ft_read_std_i(void)
{
	int	n;
	char	buff[MAX_READ_LEN + 1];
	int	byte_read;

	byte_read = (read(STDIN_FILENO, buff, MAX_READ_LEN));
	close(STDIN_FILENO);
	buff[byte_read] = '\0';
	printf("%s", buff);
	return (buff);
}

int	main(void)
{
	char	*output;
	
	output = ft_read_std_i();
}
