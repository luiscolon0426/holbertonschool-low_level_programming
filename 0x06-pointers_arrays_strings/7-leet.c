#include "main.h"

/**
 * leet - Encode a string into 1337
 * @s: The string to encode
 *
 * Return: The encoded string
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
