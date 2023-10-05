#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints the desired message to the standard error.
 * Return: 1 (Failure)
 */
int main(void)
{

	write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, ", 50);
	write(STDERR_FILENO, "2015-10-19\n", 12);
	return (1);
}
