#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _strlen_recursion - check the code
 * @s: blablalba
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}
}
