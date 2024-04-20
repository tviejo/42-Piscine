/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:38:23 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/27 00:10:00 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

void ft_show_tab(struct s_stock_str *par);
struct  s_stock_str *ft_strs_to_tab(int argc, char **argv);

int     main(int argc, char **argv)
{
        t_stock_str *output;
	
        output = ft_strs_to_tab(argc, argv);
	ft_show_tab(output);
	return (0);
}

