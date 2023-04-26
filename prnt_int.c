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
		prntd = _putint(*num);
	}
	else if (hex == 0 && oct == 1)
	{
		int decimal = convertOctal2Decimal(*num);

		prntd = _putint(decimal);
	}
	else if (hex == 1 && oct == 0)
	{
		int decimal = convert2Hex(*num);

		prntd = _putint(decimal);
	}

	return (prntd);
}

/**
 * _putint - Writes an int to stdout
 * @c: The int to write
 *
 * Return: 1 on success, -1 on error
 */

int _putint(int c)
{
	return (write(1, &c, sizeof(c));
}
