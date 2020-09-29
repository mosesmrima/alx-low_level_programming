#include "holberton.h"

/**
 *_strlen - function to return string length
 *Return: string length
 *@s: pointer to char param
 */


int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
