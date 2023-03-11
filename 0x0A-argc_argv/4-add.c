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

	if (argc > 1)
	{
		for (c = 1; c < argc; c++)
		{
			if (atoi(argv[c]) < 48 || atoi(argv[c]) > 57)
			{
				printf("Error\n");
				return (1);
			}
			b += atoi(argv[c]);
		}
		printf("%d\n", b);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
