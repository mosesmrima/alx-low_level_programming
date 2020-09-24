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
		_putchar ((i % 10) + '0');
	}

	_putchar('\n');
}
