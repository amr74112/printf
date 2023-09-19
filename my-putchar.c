#include <unistd.h>

/**
 * PUTCHAR - A function that prints a character
 * @x: is a character to be printed
 */

void PUTCHAR(char x)
{
	write(1, &x, 1);
}
