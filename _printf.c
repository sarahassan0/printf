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
					char c = va_arg(args, int);

					printed = _putchar(c);
					break;
				}
				case 's':
				{
					char *s = va_arg(args, char *);

					printed = _puts(s);
					break;
				}
				case '%':
				{
					_putchar('%');
					printed++;
					break;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			printed++;
		}
	}

	va_end(args);

	return (printed);
}

