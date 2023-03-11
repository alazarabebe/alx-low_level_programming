#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - args
 * @argc: count
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int  b, c;

	for (c = 1; c < argc; c++)
	{
	if (atoi(argv[c]) != 0)
	{
		b += atoi(argv[c]);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	else if (atoi(argv[c]) == 0)
	{
		printf("Error\n");
		return (1);
	}
	}
	printf("%d\n", b);
	return (0);
}
