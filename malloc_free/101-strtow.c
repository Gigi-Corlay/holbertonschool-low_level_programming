#include "main.h"
#include <stdlib.h>

/**
* strtow - Splits a string into words
* @str: The string to split
* Return: Pointer to an array of strings (words), or NULL on failure
*/
char **strtow(char *str)
{
    unsigned int i = 0, j, k, w = 0, n = 0, start, end, length;
    char **words;

    if (str == NULL || str[0] == '\0')
        return (NULL);

    /* Count words */
    while (str[i])
    {
        while (str[i] == ' ')
            i++;
        if (str[i])
        {
            n++;
            while (str[i] != ' ' && str[i] != '\0')
                i++;
        }
    }

    if (n == 0)
        return (NULL);

    /* Allocate array of pointers */
    words = malloc(sizeof(char *) * (n + 1));
    if (words == NULL)
        return (NULL);
    words[n] = NULL;

    /* Copy words */
    i = 0;
    w = 0;
    while (str[i] && w < n)
    {
        while (str[i] == ' ')
            i++;
        start = i;
        while (str[i] != ' ' && str[i] != '\0')
            i++;
        end = i;

        length = end - start;
        words[w] = malloc(sizeof(char) * (length + 1));
        if (words[w] == NULL)
        {
            while (w > 0)
            {
                w--;
                free(words[w]);
            }
            free(words);
            return (NULL);
        }

		for (j = 0, k = start; j < length; j++, k++)
			words[w][j] = str[k];
        words[w][length] = '\0';
		w++;
		i = end;
	}
	return (words);
}
