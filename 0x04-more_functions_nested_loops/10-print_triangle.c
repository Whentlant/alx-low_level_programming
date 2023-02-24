#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: variable
 * Return: 0
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		a = 1;
		while (a <= size)
		{
			b = size - a;
			while (b >= 1)
			{
				_putchar(' ');
				b--;
			}
			c = 1;
			while (c <= a)
			{
				_putchar('#');
				c++;
			}
			_putchar('\n');
			a++;
		}
	}
}

