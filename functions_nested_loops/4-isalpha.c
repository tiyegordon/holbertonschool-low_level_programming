#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: The character to check (ASCII code)
 *
 * Return: 1 if c is a letter (a-z or A-z), 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
