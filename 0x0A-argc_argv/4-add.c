#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - args
 * @argc: count
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int  c, b = 0;

	if (argc > 1)
	{
		for (c = 1; c < argc; c++)
		{
			if (*argv[c] < 48 || *argv[c] > 57)
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
