#include "main.h"
#include <ctype.h>
/**
 * print_sign - print sign of a number
 *
 * @i: integer to be checked
 *
 * Return: int 1 if greater than 0, 0 if 0, -1 if less than 0
 */
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);


