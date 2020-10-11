#include <stdio.h>

/**
 *main - prints all commandline arguments
 *@argc: number of arguments
 *@argv: an array of the arguments
 *Return: zero on succes
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
