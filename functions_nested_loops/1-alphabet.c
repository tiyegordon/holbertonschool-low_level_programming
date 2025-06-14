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

void print_alphabet(void) /**alphabet function, prints lowercase*/
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
putchar ('\n');
}
