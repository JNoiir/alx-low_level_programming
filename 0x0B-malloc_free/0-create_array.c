#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - main entry
 * @size: size input
 * @c: char
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i;

	A = malloc(sizeof(char) * size);

	if (size == 0 || A == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		A[i] = c;
	return (A);
}
