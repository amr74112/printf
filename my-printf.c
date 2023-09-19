#include <stdarg.h>
#include "main.h"
/**
 * _printf - A function like original _printf function
 * @format: is a string that contains format specifiers
 * @...: arguments to be formated and printed
 * @format: is a string that contains format specifiers
 * Return: The return value
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;

	va_start(args, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		char CHARACTER;
		char *STRING;

		if (format[i] == '%' && format[i + 1] == 'c')
		{
			CHARACTER = (char)va_arg(args, int);
			PUTCHAR(CHARACTER);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			STRING = va_arg(args, char*);
			PUTS(STRING);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			PUTCHAR('%');
			i++;
		}
		else
			 PUTCHAR(format[i]);
	}
	return (0);
}
