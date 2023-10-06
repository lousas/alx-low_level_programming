#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all digit numbers of base 10 followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0');
		digit++;
	}

	putchar('\n');

	return (0);
}

