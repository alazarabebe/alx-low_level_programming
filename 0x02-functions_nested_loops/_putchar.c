#include <unistd.h>
/**
 * _putchar - prints chars
 * @c: the character to prints
 * Return: 1.
 * On error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
