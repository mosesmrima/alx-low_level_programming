#include "holberton.h"
/**
 *_strcat - function to cat strings
 *@dest: param 1
 *@src: param 2
 *Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	char *begin = dest;

	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
return (begin);
}
