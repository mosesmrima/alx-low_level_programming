#include "holberton.h"

/**
 *_strpbrk - locates the first occurrence in the string s of any of
 *the bytes in
 *the string accept.
 *@s: string to pick char
 *@accept: string to compare to
 *Return: string pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int index = 0;

	while (*s)
	{
		if (*s == accept[index])
		{
			return (s);
		}
		else if (accept[index] == NULL)
		{
			return (NULL);
		}
		index++;
	}
	s++;
}
