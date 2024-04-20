/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imounjed <imounjed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:11:20 by imounjed          #+#    #+#             */
/*   Updated: 2024/02/18 19:05:42 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_verif_tab(int tableau[6][6]);
int		ft_verif_li(int tableau[6][6], int li);
int		ft_verif_case(int tableau[6][6], int li, int col, int num);
int		ft_tab_init(int tabl[6][6], char *title, int argc);
void	ft_print_tab(int tabl[6][6]);

int	ft_is_safe(int grid[6][6], int row, int col, int num)
{
	int	x;

	x = 1;
	while (x <= 4)
	{
		if (grid[row][x] == num)
			return (0);
		x++;
	}
	x = 1;
	while (x <= 4)
	{
		if (grid[x][col] == num)
			return (0);
		x++;
	}
	if (col == 4 && row == 4)
	{
		grid[row][col] = num;
		if (ft_verif_tab(grid) == 0)
			return (0);
	}
	return (1);
}

int	ft_solve(int grid[6][6], int row, int col)
{
	int	num;

	num = 1;
	if (row == 6 - 1 && col == 6)
		return (1);
	if (col == 6)
	{
		row++;
		col = 0;
	}
	if (row == 0 || row == 5 || col == 0 || col == 5 || grid[row][col] > 0)
		return (ft_solve(grid, row, col + 1));
	while (num <= 4)
	{
		if (ft_is_safe(grid, row, col, num) == 1)
		{
			grid[row][col] = num;
			if (ft_solve(grid, row, col + 1) == 1)
				return (1);
		}
		grid[row][col] = 0;
		num++;
	}
	return (0);
}
 
void	show_error(void)
{
	char	*str;

	str = "Error\n";
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	char	*title;
	int		tabl[6][6];
	int		len_argv;

	len_argv = 0;
	while (argv[1][len_argv] != '\0')
		len_argv++;
	if (len_argv == 31)
	{
		title = argv[1];
		if (ft_tab_init(tabl, title, argc) == 0)
			return (0);
		if (ft_solve(tabl, 0, 0) == 1)
			ft_print_tab(tabl);
		else
			show_error();
	}
	else
		show_error();
	return (0);
}
