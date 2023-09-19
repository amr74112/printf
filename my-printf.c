#include <stdarg.h>

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

	va_start(args, format);
	for (int i = 0; format && format[i] != '\0'; i++)
	{
		char CHARACTER;
		char *STRING;
		int NUM;

		if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			NUM = va_arg(args, int);
			PUT_INT(NUM);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
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
		va_end(args);
		return (0);
}
