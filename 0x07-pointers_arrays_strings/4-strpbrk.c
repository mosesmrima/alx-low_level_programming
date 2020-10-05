#include "holberton.h"

/**
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
