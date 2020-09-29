#include "holberton.h"

/**
 *_strcpy - copy string function
 *@dest: param 1
 *@src: param 2
 *Return: pointer
 */


char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
