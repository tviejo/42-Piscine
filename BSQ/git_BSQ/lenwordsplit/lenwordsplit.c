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

