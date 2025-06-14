#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * main - prints a message following a new line.
 * Return: always 0
 *
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

/**
 * * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int a, b;
for (a = 0; a<=9; a++)
{
for (b = 97; b <=122; b++)
{
_putchar(b);
}
_putchar ('\n');
}
}
