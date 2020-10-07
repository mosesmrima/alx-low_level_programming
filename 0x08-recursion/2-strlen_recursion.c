#include "holberton.h"

/**
 *_strlen_recursion - strlen with recursion
 *@s: string to claculate length
 *Return: void
 */


int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}

	return (count);
}
