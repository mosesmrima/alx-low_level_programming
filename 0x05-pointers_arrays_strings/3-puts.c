#include "holberton.h"

/**
 *_puts - prints a string
 *@str: string pointer
 *Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		_putchar (s[i]);
		i++;
	}
	_putchar ('\n');
}
