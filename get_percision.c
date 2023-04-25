#include "main.h"

/**
 * get_precision - prints precision
 * @format: format string
 * @args: va_list
 *
 * Return: number of characters printed
 */

int get_precision(const char *format, va_list *args)
#include <unistd.h>
{
	int prntd = 0;

	switch (*format)
	{
		case 'c':
			prntd = prnt_c(args);
			break;
		case 's':
			prntd = prnt_str(args);
			break;
		case 'd':
		case 'i':
			break;
		case '%':
			prntd = _putchar('%');
			break;
		default:
			prntd = _putchar(*format);
			break;
	}

	return (prntd);
}
