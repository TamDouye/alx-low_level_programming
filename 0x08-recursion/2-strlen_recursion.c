#include "main.h"

/**
 * _print_rev_recursion - main - check the code
 * @s: character of a string
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

*1_print*

#include "main.h"

/**
 * _strlen_recursion - main - check the code
 * @s: character of string
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
