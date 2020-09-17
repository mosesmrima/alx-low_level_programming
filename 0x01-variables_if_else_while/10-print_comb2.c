#include <stdio.h>

/**
 *main - entry point
 *Description: combo 2
 *Return: 0
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		int x = 48;

		while (x < 58)
		{
			putchar(i);
			putchar(x);
			putchar(44);
			putchar(32);
			x++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
