#include "holberton.h"
/**
 *_strncpy - function to copy a string
 *@dest: destination
 *@src: string 1
 *@n: max size
 *Return: begin
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *begin = dest;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (begin);
}
