#include "main.h"


/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0;
	va_list args;

	if (!format)
		return (-1);
	va_start(args, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			switch (format[i])
			{
				case 'c':
				{
					printed += _putchar(va_arg(args, int));
					break;
				}
				case 's':
					printed += _puts(va_arg(args, char *));
					break;
				case '%':
					printed += _putchar('%');
					break;
				default:
					printed += _putchar('%');
					printed += _putchar(format[i]);
					break;
			}
		}
		else
			printed += _putchar(format[i]);

	}
	va_end(args);
	return (printed);
}

