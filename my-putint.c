#include <unistd.h>
#include <stdio.h>
/**
 * PUT_INT - A function that prints an integer
 * @x: is an integer to be printed
 */

void PUT_INT(int x)
{
	char buffer[12];
	int len = snprintf(buffer, sizeof(buffer), "%d", x);

	if (len >= 0)
	write(1, buffer, len);
}
