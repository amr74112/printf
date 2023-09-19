#include <unistd.h>
/**
 * PUTS - A function that prints a string
 * @x: is a string to be printed
 */

void PUTS(const char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		write(1, &x[i], 1);
	}
}
