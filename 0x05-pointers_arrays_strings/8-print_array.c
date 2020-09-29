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
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
