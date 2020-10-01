#include "holberton.h"

/**
 *_strcmp - function to compare 2 strings
 *@s1: 1st
 *@s2: 2nd
 *Return: int
 */


int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		break;
	}
	return (*s1 - *s2);
}
