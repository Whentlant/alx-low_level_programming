#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * initializes it with a specific char
 * @size: size of the array
 * @c: specific char
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
