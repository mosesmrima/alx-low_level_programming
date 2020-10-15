#include "holberton.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates memory and error checks
 *@b: size of the memory to allocate
 *Return: void on success, exit98 on fail
 */

void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);
	if (alloc == NULL)
		exit(98);

	return (alloc);
}
