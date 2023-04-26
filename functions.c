#include "main.h"

/**
 * checkOctal - checks if a number is octal
 * @octalNumber: the number to check
 *
 * Return: 1 if octal, 0 otherwise
 */

int checkOctal(int octal)
{
	int remainder;

	while (octal != 0)
	{
		remainder = octal % 10;

		if (remainder >= 8)
	{
		return (0);
	}

	octal /= 10;
	}

	return (1);
}

/**
 * convertOctal2Decimal - converts an octal number to decimal
 * @octalNumber: the octal number to convert
 *
 * Return: the decimal equivalent of the octal number
 */

int convertOctal2Decimal(int octal)
{
	int decimal = 0, i = 0;

	while (octal != 0)
	{
		decimal += (octal % 10) * pow(8, i);
		++i;
		octal /= 10;
	}

	return (decimal);
}
/**
 * convert2Hex - converts a hexadecimal string to decimal
 * @hex: the hexadecimal string to convert
 *
 * Return: the decimal equivalent of the hexadecimal string
 */

int convert2Hex(char hex[])
{
	int length = strlen(hex);
	int i = 0;
	int decimal = 0, base = 1;

	for (i = length--; i >= 0; i--)
	{
		if (hex[i] >= '0' && hex[i] <= '9')
		{
			decimal += (hex[i] - 48) * base;
			base *= 16;
		}
		else if (hex[i] >= 'A' && hex[i] <= 'F')
		{
			decimal += (hex[i] - 55) * base;
			base *= 16;
		}
		else if (hex[i] >= 'a' && hex[i] <= 'f')
		{
			decimal += (hex[i] - 87) * base;
			base *= 16;
		}
	}
	return (decimal);
}
