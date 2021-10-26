#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a  pointer to newly allocated
 * spaces in memory that copies string given as a parameter.
 * @str: string tp be duplicated.
 *
 * Return: characters.
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *s;
	unsigned int len;

	len = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}

	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}


	i = 0;
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';

	return (s);


}
