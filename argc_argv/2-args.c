#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all arguments it receives, including
 * the first one (the program name) in separate lines.
 *
 * @argc: The number of command-line arguments including the program name.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
