#include "holberton.h"
/**
 *_strcat - function to cat strings
 *@dest: param 1
 *@src: param 2
 *Return: char pointer
 */

char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
