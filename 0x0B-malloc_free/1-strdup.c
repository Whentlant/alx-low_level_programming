#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns  pointer to a newly allocated space in memory
 * which containe a copy of the string given as param
 * @str: pointer to the given string
 * Return: pointer to duplicated string or NULL if failure
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i;
	unsigned int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\0';
	return (dup);
}
