#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			_putchar((n / 100) + '0');   /* Print hundreds digit */
			_putchar(((n / 10) % 10) + '0'); /* Print tens digit */
			_putchar((n % 10) + '0');    /* Print ones digit */

			if (n != 98)
			{
				_putchar(','); /* Print comma */
				_putchar(' '); /* Print space */
			}
		}
	}
	else
	{
		for (; n < 98; n++)
		{
			_putchar((n / 100) + '0');   /* Print hundreds digit */
			_putchar(((n / 10) % 10) + '0'); /* Print tens digit */
			_putchar((n % 10) + '0');    /* Print ones digit */

			_putchar(','); /* Print comma */
			_putchar(' '); /* Print space */
		}
	}

	/* Print 98 */
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

