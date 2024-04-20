/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idees.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:07:58 by tchobert          #+#    #+#             */
/*   Updated: 2024/02/27 17:38:22 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

char	*ultimate_str(char *argument);
char	**create_matrice(char *str);
int		ft_atoi(char *str);

static void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(char));
}

static void	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		++i;
	}
}
/*
static int	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}
*/
int	main(int ac, char **av)
{
	int		fd;
	int		i;
	size_t	bytes_read;
	char	*ult_str;
	char	**matrice;
	char	first_line[15];

	i = 0;
	(void)ac;
	fd = open(av[1], O_RDONLY);
//		return (ERROR);
	while ((bytes_read = read(fd, &first_line[i], 1)) > 0)
	{
		if (first_line[i] == '\n')
			break;
		++i;
	}
	first_line[i] = '\0';
	ft_putstr(first_line);
	matrice = create_matrice(first_line);
	ult_str = ultimate_str(av[1]);
	//SECU ULTIMATE
	ft_putstr(ult_str);
	if (matrice == NULL)
	{
		return (-1);
	}
	close(fd);
	return (0);
}

char	**create_matrice(char *str)
{
	int	size;
	char **matrice;
	
	size = ft_atoi(str);
	matrice = (char **)malloc(sizeof(char *) * (size + 1));
	if (matrice == NULL)
		return (matrice);
	matrice[size] = NULL;
	return (matrice);
}

char	*ultimate_str(char *argument)
{
	char	c;
	int		fd;
	size_t	i;
	char	*ultimate_str;

	i = 0;
	fd = open(argument, O_RDONLY);
	/*
	if (fd < 0)
	{
		//RETURN ERROR
	}
	*/
	while ((read(fd, &c, 1) > 0))
		++i;
	ultimate_str = (char *)malloc(sizeof(char) * (i + 1));
	if (ultimate_str == NULL)
		return (ultimate_str);
	ultimate_str[i + 1] = '\0';
	close(fd);
	fd = open(argument, O_RDONLY);
	read(fd, ultimate_str, i);
	close(fd);
	return (ultimate_str);
}

int     ft_len_words(char *str, char *charset)
{
        int     i;
        int     len_words;

        len_words = 0;
        i = 0;
        while (str[i] != '\0' && ft_is_charset(str[i], charset) == 0)
        {
                len_words++;
                i++;
        }
        return (len_words);
}

char    **create_matrice(char *str, char *charset)
{
        int             i;
        int             j;
        int             k;
        char    **output;
        int             len_words;

        while (str[i] != '\0')
        {
                if (str[i] != '\n')
                {
                        len_words = ft_len_words(&str[i], "\n\0");
                        output[j] = malloc((len_words + 1) * sizeof(char));
                        if (output[j] == 0)
                                return (0);
                        k = -1;
                        while (++k < len_words)
                                output[j][k] = str[i++];
                        output[j][k] = '\0';
                        j++;
                }
                else
                        i++;
        }
        output[j] = 0;
        return (output);
}     




//create_matrice est appelee avec FIRST_LINE EN ARGUMENT
