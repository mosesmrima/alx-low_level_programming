#include "holberton.h"
/**
 *leet - convert string to leet
 *@x: the string
 *Return:  the leet string
 */

char *leet(char *x)
{
	int i = 0;
	char *answer = x;
	char *spesh = "aAeEoOtTlL";
	char *spesh2 = "4433007711";

	while (*x)
	{
		for (i = 0; spesh[i]; i++)
		{
			if (*x == spesh[i])
			{
				*x = spesh2[i];
			}
		}
		x++;
	}
	return (answer);
}
