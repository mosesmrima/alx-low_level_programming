#include "holberton.h"
/**
 *_puts_recursion - pritns str recursivly
 *@s: string
 *Return: void
 */


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(char *(s + 1));
}
