#include "holberton.h"
#include <stdlib.h>

/**
 *argstostr - cats cmdline arguments t string
 *@ac: no. of args
 *@av: the args
 *Return: string
 */
char *argstostr(int ac, char **av)
{
	char *whole;
	int argvv, letter, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (argvv = 0; argvv < ac; argvv++)
	{
		for (letter = 0; av[argvv][letter]; letter++)
			size++;
	}

	whole = malloc(sizeof(char) * size + 1);

	if (whole == NULL)
		return (NULL);

	i = 0;

	for (argvv = 0; argvv < ac; argvv++)
	{
		for (letter = 0; av[argvv][letter]; letter++)
			str[i++] = av[argvv][letter];

		str[i++] = '\n';
	}

	whole[size] = '\0';

	return (whole);
}
