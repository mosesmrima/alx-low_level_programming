#include "holberton.h"

/**
 *create_array - function createes an array and initialize it
 *@size: size of the array
 *@c:  the char
 *Return: pointer of null
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	int i;

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
