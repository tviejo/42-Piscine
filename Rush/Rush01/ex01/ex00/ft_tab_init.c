/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:53:29 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/18 15:58:29 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	show_error(void);

int	ft_verify_arg(char *title)
{
	int	i;

	i = 0;
	while (i <= 30)
	{
		if (1 <= title[i] && title[i] <= 4)
		{
			show_error();
			return (0);
		}
		i = i + 2;
	}
	i = 1;
	while (i <= 30)
	{
		if (title[i] != ' ')
		{
			show_error();
			return (0);
		}
		i = i + 2;
	}
	return (1);
}

void	initialize(int tabl[6][6], char *title)
{
	tabl[0][1] = title[0] - '0';
	tabl[0][2] = title[2] - '0';
	tabl[0][3] = title[4] - '0';
	tabl[0][4] = title[6] - '0';
	tabl[5][1] = title[8] - '0';
	tabl[5][2] = title[10] - '0';
	tabl[5][3] = title[12] - '0';
	tabl[5][4] = title[14] - '0';
	tabl[1][0] = title[16] - '0';
	tabl[2][0] = title[18] - '0';
	tabl[3][0] = title[20] - '0';
	tabl[4][0] = title[22] - '0';
	tabl[1][5] = title[24] - '0';
	tabl[2][5] = title[26] - '0';
	tabl[3][5] = title[28] - '0';
	tabl[4][5] = title[30] - '0';
}

void	set_to_zero(int tabl[6][6])
{
	int	i;
	int	j;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			tabl[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	ft_tab_init(int tabl[6][6], char *title, int argc)
{
	if (argc != 2)
	{
		show_error();
		return (0);
	}
	else
	{
		if (ft_verify_arg(title) == 1)
		{
			initialize(tabl, title);
			set_to_zero(tabl);
			return (1);
		}
	}
	return (0);
}
