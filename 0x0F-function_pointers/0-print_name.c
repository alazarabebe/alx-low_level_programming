#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function poiniter
 * @name: char
 * @f: char function
 * Return: pointer
 */

void print_name(char *name, void (*f)(char *))
{	
	f(name);
}