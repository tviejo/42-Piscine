/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:47:35 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/21 18:06:07 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i <= 46340)
	{
		if (ft_recursive_power(i, 2) == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n",ft_sqrt(2147395600));
}
*/
