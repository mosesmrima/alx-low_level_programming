#include "holberton.h"

/**
 *_isupper - checks for upper case chars
 *Return: 1 on true
 *@c: the char
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
