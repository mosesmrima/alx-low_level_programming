#include "holberton.h"

/**
 *swap_int - swap function
 *return: void
 *@a: param 1
 *@b: param 2
 */


void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
