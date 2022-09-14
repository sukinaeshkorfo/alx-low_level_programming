#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last digit for a given number
 *
 * @n: int to be altered
 *
 * Return: int i
 */
int print_last_digit(int n)
{
	int i;

	if (n > 0)
		i = n % 10;
	else
		i = -1 * (n % 10);
	_putchar('0' + i);
	return (i);
}

