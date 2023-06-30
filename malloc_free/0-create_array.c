#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of charaters, and initilizes it with a
 *		  specific character.
 * @size: size of array.
 * @c: char to initialize the array.
 *
 * Return: pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *aux = malloc(sizeof(char) * size);
	unsigned int i;

	if (aux == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		aux[i] = c;
	return (aux);
}
