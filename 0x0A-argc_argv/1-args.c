#include <stdio.h>
/**
 *main - prints the number of passed commandline arguments
 *@argc: the number of arguments
 *@argv: an array of the arguments
 *Return: 0 on success
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
