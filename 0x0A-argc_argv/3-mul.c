#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints yhe product of 2 cmdl args
 *@argc: argument count
 *@argv: array of the arguments
 *Return: 0 on succes, 1on on failure
 */


int main(int argc, char *argv[])
{
	int arg1, arg2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
