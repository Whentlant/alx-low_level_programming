#include "main.h"

/**
 * main - output 
 * print_alphabet_x10 Function that  Print lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char num, letter;

	for (num = 0; num <= 9; num++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
