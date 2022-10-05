#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, z;
	char *a;

	if (str == NULL)
		return (NULL);

	for (z = 0; z <= *str; z++)
	{
	}

	z += 1;
	a = malloc(sizeof(char) * z);

	for (i = 0; i < z; i++)
		z[i] = str[i];

	if (a == NULL)
		return (NULL);
	return (a);
}
