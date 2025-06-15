#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
* _islower - Checks if a character is lowercase.
* @c: The character to check (ASCII code)
*
* Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
