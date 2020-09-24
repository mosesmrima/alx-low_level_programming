#include "holberton.h"

/**
 *more_numbers - print from 1 to 14
 *
 */



void more_numbers(void)
{
	int i;

	int count;

	for (count = 0; count < 10; count++)
	{

	for (i = 0; i < 15; i++)
	{
		if (i < 9)
			_putchar((i / 10));
			_putchar((i % 10));
		_putchar('\n');
	}
	}
}
