#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes most of the words in a string.
 * @s: analized string.
 *
 * Return: String with all words capitalized.
 */

char *cap_string(char *s)

{
	int i, j;
	int a[] = {22, 7, 10, 44, 69, 76, 23, 87, 14, 54, 19, 23, 35};

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
			{
				*(s + i) = *(s + i) - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + i - 1))
					{
						*(s + i) = *(s + i) - 32;
					}
				}
			}
		}
	i++;
	}
	return (s);
}

