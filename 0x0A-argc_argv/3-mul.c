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
	int a, b;

	if (argc == 3)
	{
		b = atoi(argv[1]);
		a = atoi(argv[2]);
		b = a * b;
		printf("%d\n", b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
