#include <stdlib.h>
#include <stdio.h>

/**
 *main - prints yhe product of 2 cmdl args
 *@argc: argument count
 *@argv: array of the arguments
 *Return: 0 on succes, 1on on failure
 */


int main(int argc, char *argv)
{
	if ((argv - 1) != 2)
	{
		printf("Error\n");

		return (1);
	}

	int product, arg1, arg2;

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	product = arg1 * arg2;

	printf("%d\n", product);

	return (0);
}
