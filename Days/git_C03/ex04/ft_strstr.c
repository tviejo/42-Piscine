/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:19:15 by tviejo            #+#    #+#             */
/*   Updated: 2024/02/22 18:10:09 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strstr(char *str, char *to_find)
{
        char    *str_temp;
        int             cs;
        int             cf;

        cs = 0;
        cf = 0;
        if (to_find[0] == '\0')
                return (str);
        while (str[cs] != '\0')
        {
                if ((to_find[cf] == '\0') || ((str[cs] == to_find[cf])
                                && (cf > 0) && (to_find[cf + 1] == '\0')))
                        return (str_temp);
                else if ((str[cs] != to_find[cf]) && (cf > 0)
				&& (to_find[cf] != '\0'))
                        cf = 0;
                else if ((str[cs] == to_find[cf]) && (cf > 0)
				&& (to_find[cf] != '\0'))
                        cf++;
                if (str[cs] == to_find[cf] && cf == 0)
                {
                        str_temp = &(str[cs]);
                        cf++;
                }
                cs++;
        }
        return (0);
}
/*
#include <stdio.h>
int main(void)
{
        char    s1[] = "ABCDEGHIDEFJKLMNOP";
        char    s2[] = "DEF";
	char	*s3;

        s3 = ft_strstr(s1, s2);
        printf("%s", s3);
}
*/
