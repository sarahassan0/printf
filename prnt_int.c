#include "main.h"

/**
 * prnt_int - prints an integer
 * @args: a pointer to a list of arguments
 *
 * Return: the number of characters printed
 */

int prnt_int(va_list * args)
{
	int prntd = 0;
	int *num = va_arg(*args, int);
	int oct = checkOctal(num);

	if (oct == 1)
	{
		int decimal = convertOctal
			2Decimal(num);

		prntd = _putchar(decimal);
	}
	else if ( oct == 0)
	{
		prntd = _putchar(num);
	}

	return (prntd);
}
