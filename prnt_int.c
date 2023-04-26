#inclue "main.h"

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
	int hex = isxdigit(*num);
	int oct = checkOctal(*num);

	if (hex == 0 && oct == 0)
	{
		prntd = prnt_d(*num);
	}
	else if (hex == 0 && oct == 1)
	{
		int decimal = convertOctal2Decimal(*num);

		prntd = prnt_d(decimal);
	}
	else if (hex == 1 && oct == 0)
	{
		int decimal = convert2Hex(*num);

		prntd = prnt_d(decimal);
	}

	return (prntd);
}

/**
 * prnt_d - prints an integer recursively
 * @d: the integer to print
 *
 * Return: the number of characters printed
 */
int prnt_d(int d)
{
	int prntd = 0;

	if (d < 0)
	{
		prntd += _putchar('-');
		d = -d;
	}

	if (d / 10)
	{
		prntd += prnt_d(d / 10);
	}

	prntd += _putchar(d % 10 + '0');

	return (prntd);
}
