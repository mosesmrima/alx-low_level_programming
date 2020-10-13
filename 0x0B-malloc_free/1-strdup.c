#include "holberton.h"

/**
 *_strdup - duplicates a string
 *@str: the string to duplicate
 *Return: pointer to the dulicate string
 */


char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NUL);
	}

	int len = 0;

	int i;

	while (str)
	{
		len++;
		str++;
	}
	char *str2 = malloc(sizeof(char) * (len + 1));

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		str2[i] == str[i];
	}

	str2[len] = '\0';

	return (str2);
}
