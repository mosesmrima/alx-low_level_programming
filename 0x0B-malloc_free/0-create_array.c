#include <stdlib.h>
#include "holberton.h"
/**
 *create_array - creates an array
 *@size: size of the array
 *@c: char to initialize the array
 *Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
