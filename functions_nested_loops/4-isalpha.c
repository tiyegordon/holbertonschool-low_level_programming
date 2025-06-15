#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * main - prints a message following a new line.
 * Return: always 0
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

/**
 *_isalpha- Shows 1 if alphabetic character.
 *Another cases, shows 0.
 *@c: The character is ASCII code1 for lowercase character.
 * Return: 1 for lowercase character. 0 for the rest.
 */


int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
