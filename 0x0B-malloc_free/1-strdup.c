#include <stdlib.h>
#include "holberton.h"
/**
 *_strdup - duplicates a string
 *@str: the string
 *Return: duplicate string
 */

char *_strdup(char *str)
{
	int i, len = 0;

	char *str2;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	str2 = malloc(sizeof(char) * (len + 1));

	if (str2 == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		str2[i] = str[i];

	str2[i + 1] = '\0';

	return (str2);
}
