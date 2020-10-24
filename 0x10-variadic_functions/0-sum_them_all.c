#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - function to sum numbers
 *@n: number of arguments
 *Return: 0 when n==0 else sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	int i;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += var_arg(valist, int);
	}
	var_end(valist);
	return (sum);
}
