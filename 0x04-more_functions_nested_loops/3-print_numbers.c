#include "holberton.h"
/**
 *print_numbers - prits numbers from 1-9
 *Return: number
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar (i);
	}

	_putchar('\n');
}
