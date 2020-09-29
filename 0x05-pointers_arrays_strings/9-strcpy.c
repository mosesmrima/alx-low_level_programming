#include "holberton.h"

/**
 *_strcpy - copy string function
 *@dest: param 1
 *@src: param 2
 *Return: pointer
 */


char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
