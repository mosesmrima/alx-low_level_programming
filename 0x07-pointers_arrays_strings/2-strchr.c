#include "holberton.h"

/**
 *_strchr - function to search for occurrence of a character in a string
 *@s: string pointer
 *@c: character to search for
 *Return: pointer to character if characer was found, else return null
 */


char *_strchr(char *s, char c)
{
	char *string = s;

	char character = c;

	int index;

	while (s[index])
	{
		if (s[index] == character)
		{
			return (*(s + index));
		}

		else
		{
			return (NULL);
		}

		index++;
	}
}
