#include <stdio.h>
/**
 *main- starting point
 *Description: print alphabet
 *Return: 0
 */

int main(void)
{
	char a = 'a';

	for (a < 'z'; a++)
	{
		putchar(a);
	}

	a = 'A';
	for (a < 'Z' a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
