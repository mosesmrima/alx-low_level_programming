#include "holberton.h"

/**
 *_isdigit - checks whether number is between 0 and 9
 *Return: 1 on true 0 on false
 *@c: the param
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
