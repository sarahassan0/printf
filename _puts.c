#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: the length of the string
 */

int _puts(char *str)
{

	int i = 0;

	if (!str)
		return (0);

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}


/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: 1 on success, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
