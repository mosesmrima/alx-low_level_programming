#include <stdio.h>

/**
 * main - entry point
 *Description: reverse alpha
 * Return: 0
 */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}

	putchar('\n');
	return (0);
}
