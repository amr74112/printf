#include <unistd.h>
/**
 * PUTS - A function that prints a string
 * @x: is a string to be printed
 * Return: return value of len
 */

int PUTS(const char *x)
{
	int i;
	int len = 0;

	for (i = 0; x[i] != '\0'; i++)
	{
		write(1, &x[i], 1);
		len++
	}
	return (len);
}
