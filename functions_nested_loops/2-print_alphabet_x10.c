#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_alphabet_x10 - Prints a message following a new line.
 *
 * Return: Nothing (void)
 */

void print_alphabet_x10(void)
{
int a, b;
for (a = 0; a <= 9; a++)
{
for (b = 97; b <= 122; b++)
{
_putchar(b);
}
_putchar ('\n');
}
}
