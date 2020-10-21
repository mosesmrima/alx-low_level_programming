#include "function_pointers.h"
/**
 *print_name - prints a name
 *@name: parameter 1
 *@f: parameter 2
 *Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
