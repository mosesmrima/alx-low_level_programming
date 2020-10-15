#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc - impliments calloc with malloc
 *@nmemb: number of elements
 *@size: size of 1 element
 *Return: pointer to memory on success, NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	char *buffer;

	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(nmemb * size);

	if (mem == NULL)
	{
		return (NULL);
	}

	buffer = mem;

	for (i = 0; i < (nmemb * size); i++)
		buffer[i] = '\0';

	return (mem);
}
