#include "main.h"

/**
 * _printf - A function like original _printf function
 * @format: is a string that contains format specifiers
 * Return: The return value (Count)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int Count;

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
			Count += PUTCHAR(CHARACTER);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			STRING = va_arg(args, char*);
			Count += PUTS(STRING);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			Count += PUTCHAR(format[i]);
			i++;
		}
		else
		{
			if (format[i] == '\0')
				break;
			Count += PUTCHAR(format[i]);
		}

	}
	return (Count);
}
