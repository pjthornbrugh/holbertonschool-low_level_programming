#include "main.h"

/**
 * *_strcat - concatenates two strings together.
 * *dest: destination
 * *src: source
 *
 * Return: pointer to the resulting string destination.
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;
	char* ptr = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';

	return ptr;
}
