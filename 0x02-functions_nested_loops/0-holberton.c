#include "holberton.h"

/**
 *main - entry
 *Description: _putchar
 *Return: 0
 */

int main(void)
{
	char *holberton = "Holberton";

	int i = 1;

	while (holberton[i] != '\0')
	{
		_putchar(holberton[i]);
	}
			_putchar('\n');
		return (0);
}
