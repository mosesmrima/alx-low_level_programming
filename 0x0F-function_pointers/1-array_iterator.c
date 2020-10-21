#include "function_pointers.h"
/**
 *array_iterator - function that executes a function given as parameter
 *@array: array used
 *@size: size of the array
 *@action: pointer to the function
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t z;

if (array != NULL && action != NULL)
{
for (z = 0; z < size; z++)
{
action(array[z]);
}
}
}
