#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is a program that tell you the number is + or -
 * Return: zero
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = '1'; j <= '8'; j++)
		{
			for (k = '2'; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
