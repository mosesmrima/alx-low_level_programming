#include "holberton.h"
/**
 *_strncat - concatenates 2 strings
 *@dest: destination string
 *@src: first string
 *@n: count
 *Return: begin
 */


char *_strncat(char *dest, char *src, int n)
{
	char *begin = dest;

	while (*dest)
		dest++;
	for (; n > 0; n--)
	{
		if (*src)
		{
			*dest = *src;
			dest++;
			src++;
		}
		else
			break;
	}
return (begin);
}
