#include "main.h"


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
