#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - args
 * @argc: count
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int  c, a, b = 0;

	if (argc > 1)
	{
		for (c = 1; c < argc; c++)
		{
			for (a = 0; a < strlen(argv[i]); a++)
			{
				if (argv[a] < 48 || argv[a] > 57)
				{
					printf("Error\n");
					return (1);
				}
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
