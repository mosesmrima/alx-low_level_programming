#include "holberton.h"

/**
 *_memset - function to set memory with constant
 *@s: memory
 *@b: consant
 *@n: number of bytes to be set
 *Return: ponter too the memory
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	char *memory = s;

	unsigned int value = b;

	for (index = 0; index < n; index++)
	{
		memory[index] = value;
	}

	return (memory);
}
