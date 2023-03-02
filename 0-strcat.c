#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: the destination where string will be appended to
 * @src: containes the string to append
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	/* get length of dest and store it in i */
	for (a = 0; dest[a] != '\0'; a++)
		continue;

	/* concatenate src at the end of dest */
	for (b = 0; src[b] != '\0'; b++, a++)
		dest[a] = src[b];
	dest[a] = '\0';
	return (dest);
}
