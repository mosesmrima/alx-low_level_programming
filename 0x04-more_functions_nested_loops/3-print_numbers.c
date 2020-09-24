#include "holberton.h"
/**
 *print_numbers - prits numbers from 1-9
 *Return: number
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar (i + '0');
	}

	_putchar('\n');
}
