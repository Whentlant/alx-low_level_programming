#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to be compared with
 * @accept: pointer to the substring
 * Return: length of the substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, length;

	length = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				length++;
				break;
			}
		}
		if (*(s + i) != *(accept + j))
			return (length);
	}
}

