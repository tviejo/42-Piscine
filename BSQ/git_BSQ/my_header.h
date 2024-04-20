/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:37:25 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/26 16:48:29 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MY_HEADER_H
# define FT_MY_HEADER_H

typedef struct biggest
{
	int size;
	int x;
	int y;
} t_square;

typedef struct character
{
	int nb_ligne;
	int nb_col;
        char empty;
        char obstacle;
        char full;
} t_character;


#endif         
