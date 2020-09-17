#include <stdio.h>
/**
 *main- starting point
 *Description: print alphabet
 *Return: 0
 */

int main(void)
{
	char a;

	a = 'a';
		while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	a = 'A';
	while (a <= 'Z')
	{

		putchar(a);
		a++;
	}
	putchar('\n');
}
