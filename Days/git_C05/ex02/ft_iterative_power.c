/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 21:21:07 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/20 23:14:36 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	i = 0;
	result = 1;
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		printf("%d\n",ft_iterative_power(2, i));
		i++;
	}
}
*/
