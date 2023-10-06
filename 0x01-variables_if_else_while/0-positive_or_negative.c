#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: true or false validation
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is 0\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	return (0);
}
}
