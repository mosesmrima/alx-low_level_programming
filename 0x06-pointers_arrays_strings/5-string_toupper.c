#include "holberton.h"
/**
 *string_toupper - remover lowercase chars from a string
 *@s: sring pointer
 *Return: string pointer
 */

char *string_toupper(char *s)
{
	char *p = s;

	for (; *s; s++)
	{
		if (*s > 96 && *s < 123)
		{
			*s = *s - 32;
		}
	}
	return (p);
}
