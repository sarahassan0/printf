#include "main.c"

/**
 * prnt_str - function to print a string
 * @args: argument list containing the string
 *
 * Return: number of characters printed
 */

int prnt_str(va_list *args)
{
	int prntd = 0;
	char *str = va_arg(*args, char *);

	if (!str)
		prntd += _puts("(null)");
	else
		prntd += _puts(str);

	return (prntd);
}

