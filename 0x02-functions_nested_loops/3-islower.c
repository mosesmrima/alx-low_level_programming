#include "holberton.h"

/**
 *_islower - a fuction to check whether the given char is lowercase
 *@c: an argument
 *Return: 1 for true, else 0
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
