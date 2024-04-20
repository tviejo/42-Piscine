/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:50:52 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/21 13:28:41 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	if (nb == 2)
		return (2);
	result = nb;
	while (nb > 2)
	{
		nb --;
		result = result * nb;
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
		printf("%d\n",ft_iterative_factorial(i));
		i++;
	}
}
*/
