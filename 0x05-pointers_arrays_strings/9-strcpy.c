#include "holberton.h"

/**
 *_strcpy - copy string function
 *@dest: param 1
 *@src: param 2
 *Return: pointer
 */


char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
