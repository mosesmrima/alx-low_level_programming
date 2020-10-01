#include "holberton.h"

/**
 *reverse_array  - function to reverse an array
 *@a: array
 *@n: size
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int *z = a;

	for (i = 0; i < (n - 1); i++)
		z++;
	for (i = 0; i <= n; i++)
		while (a < z)
		{
			temp = *a;
			*a = *z;
			*z = temp;
			a++;
			z--;
		}
}
