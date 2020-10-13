#include "holberton.h"
#include <stdlib.h>
/**
 *_strdup - duplicates a string
 *@str: the string to duplicate
 *Return: pointer to the dulicate string
 */


char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	int len = 0;

	int i;

	for (i = 0; str[i]; i++)
	{
		len++;
	}
	char *str2 = malloc(sizeof(char) * (len + 1));

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		str2[i] = str[i];
	}

	str2[len] = '\0';

	return (str2);
}
