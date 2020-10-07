#include "holberton.h"

/**
 *factorial - finds factorial of a number
 *@n: the number
 *Return: factorial
 */



int factorial(int n)
{
	if (n <= 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
