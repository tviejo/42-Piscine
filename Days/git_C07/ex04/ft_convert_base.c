/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:48:06 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/27 17:06:16 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_verif_base(char *base);
int	ft_atoi_base(char *str, char *base);

int	ft_len_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

long int	ft_len(long int nb, char *base)
{
	int	i;
	int	len_base;

	len_base = ft_len_base(base);
	i = 0;
	if (nb < 0)
		nb = -nb;
	while (nb > len_base - 1)
	{
		nb = nb / len_base;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa_base(long int nb, char *base)
{
	long int	leni;
	char		*nbr_char;
	int			i;

	leni = ft_len(nb, base) - 1;
	nbr_char = malloc(34 * sizeof(char));
	if (nbr_char == NULL)
		return (NULL);
	nbr_char[0] = '0';
	if (nb < 0)
	{
		nbr_char[0] = '-';
		nb = -nb;
		leni++;
	}
	i = leni;
	while (nb > 0)
	{
		nbr_char[i] = (nb % ft_len_base(base) + 48);
		nb = nb / ft_len_base(base);
		i--;
	}
	nbr_char[leni + 1] = '\0';
	return (nbr_char);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	nbr_int;
	char		*nbr_char;

	if (ft_verif_base(base_from) == 1 && ft_verif_base(base_to) == 1)
	{
		nbr_int = (long int)ft_atoi_base(nbr, base_from);
		nbr_char = ft_itoa_base(nbr_int, base_to);
		return (nbr_char);
	}
	else
		return (NULL);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*output;

	(void)argc;
	output = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("%s", output);
}
*/
