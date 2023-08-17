#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @t: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *t)
{
	int longit = 0;

	if (*t)
	{
		longit++;
		longit += _strlen_recursion(t + 1);
	}

	return (longit);
}

