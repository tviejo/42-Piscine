/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:10:05 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/19 18:17:04 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		write(1, &str[cpt], 1);
		cpt++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	(void)argc;
	i = 1;
	while (argv[i] != NULL)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
