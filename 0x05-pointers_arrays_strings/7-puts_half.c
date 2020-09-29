#include "holberton.h"

/**
 *puts_half - prints half a string
 *@str: param
 *Return: void
 */

void puts_half(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	if (i % 2 != 0)
	{
		int m;

		m = (i - 1) / 2;

		while (*(str + m) != '\0')
		{
			_putchar(*(str + m);
				 m++;
		}
	}
		else
		{
			i = i / 2;

			int m;

			while (*(str + m) != '\0')
			{
				_putchar(*(str + m);
					 m++;
			}
}
	}
