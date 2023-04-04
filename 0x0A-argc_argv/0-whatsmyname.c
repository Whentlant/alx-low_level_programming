#include <stdio.h>
/**
 * main - prints the program name
 * @argc: args count
 * @argv: args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%d\n", argc - 1);
	return (0);
}
