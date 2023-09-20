#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - A function like the original printf function
 * @format: a string that contains format specifiers
 * Return: The return value
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i, count = 0;

    va_start(args, format);
    if (format == NULL)
        return (-1);

    for (i = 0; format[i] != '\0'; i++)
    {
        char CHARACTER;
        char *STRING;

        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
                case 'c':
                    CHARACTER = (char)va_arg(args, int);
                    PUTCHAR(CHARACTER);
                    count++;
                    break;
                case 's':
                    STRING = va_arg(args, char*);
                    if (STRING == NULL)
                        return (-1);
                    PUTS(STRING);
                    count++;
                    break;
                case '%':
                    PUTCHAR('%');
                    count++;
                    break;
                default:
                    PUTCHAR('%');
                    PUTCHAR(format[i]);
                    count += 2;
            }
        }
        else
        {
            PUTCHAR(format[i]);
            count++;
        }
    }

    va_end(args);
    return (count);
}
