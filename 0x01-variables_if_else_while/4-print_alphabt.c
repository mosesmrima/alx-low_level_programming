#include <stdio.h>
/**
 *main - entry point
 *Description: alphabet except q and e
 *Return: o
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
		putchar(a);
	}
	putchar('\n');
	return (0);
}
