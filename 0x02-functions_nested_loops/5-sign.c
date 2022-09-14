#include "main.h"
/**
 * _abs - calculate the absolute value of the number from zero.
 * @i: the integer to be converted.
 * Return: absolute value of the input number.
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}/**
 * print_sign - Determines whether an integer is positive, negative or zero.
 * @i: the number to be checked.
 * Return: 1 if positive, 0 if zero, -1 if negative, / if not a digit.
 */
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}

