#include "holberton.h"

/**
 *print_line - prints a straight line
 *@n: count
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		while (i == n)
		{
			_putchar (45);
		}
	}
	_putchar ('\n');
}
