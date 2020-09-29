#include "holberton.h"
#include <stdio.h>

/**
 *print_array - prnts int array
 *@a: array pointer
 *@n: array lenght
 *Return: void
 */


void print_array(int *a, int n)
{
	int c = 0;

	while (c < n)
	{
		printf("%d, ", *(a + c));
		c++;
	}
	printf("\n");
}
