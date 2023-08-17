#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @t: The string to be printed.
 */
void _print_rev_recursion(char *t)
{
	if (*t)
	{
		_print_rev_recursion(t + 1);
		_putchar(*t);
	}
}

