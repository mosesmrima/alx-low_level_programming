#include "holberton.h"
#include <stdlib.h>
/**
 *str_concat - concatenates 2 strs
 *@s1: str 1
 *@s2:str2
 *Return: strcat
 */
char *str_concat(char *s1, char *s2)
{
	int lt;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lt = sizeof(s1) + sizeof(s2);

	char *catstrng = malloc(sizeof(char) * lt);

	if (catstrng == NULL)
		return (NULL);

	int i;

	for (i = 0; s1[i]; i++)
		catstrng[i] = s1[i];

	int i2 = i;

	for (i = 0; s2[i]; i++)
	{
		catstrng[i2] = s2[i];

		i2++;
	}
	return (catstrng);
}
