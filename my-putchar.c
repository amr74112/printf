#include <unistd.h>

/**
 * PUTCHAR - A function that prints a character
 * @x: is a character to be printed
 * Return: return value of len
 */

int PUTCHAR(char x)
{
	write(1, &x, 1);
	return (1);
}
