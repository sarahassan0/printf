#include "main.h"

/**
 * _printf - prints formatted output
 * @format: format string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int prntd = 0, i = 0;
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}
			prntd += get_precision(&format[i], &args);
		}
		else
		{
			prntd += _putchar(format[i]);
		}
	}

	va_end(args);
	return (prntd);
}

