#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function variadic
 * @n: n
 * @separator: char
 * Return: prints number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int p;
		
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, int);
		if (separator != NULL)
		{
			printf("%d%s", p, separator);
		}
		if (separator == NULL)
		{
			printf("%d", p);
			printf("\n");
		}
	}
	va_end(ap);
	printf("\n");
}
