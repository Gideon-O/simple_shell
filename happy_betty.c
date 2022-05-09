#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry to process
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 1
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error: Enter argument\n");
		exit(0);
	}

	for (x = 0; x < argc; x++)
		printf("Your %d input is %s!\n", x, argv[x]);
	printf("Done!\n");
	return (0);
}
