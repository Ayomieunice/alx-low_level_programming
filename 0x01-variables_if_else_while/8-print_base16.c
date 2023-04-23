#include <stdio.h>

/**
 * main - Print numbers 0 to 9
 * followed by lowercase letter a to f
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
