#include "main.h"
#include <unistd.h>

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

int _putchar(char c) /** _putchar - writes the character c to stdout*/
{
return (write(1, &c, 1));
}
int main(void)
{
char str[] = "_putchar\n";
int i;

for (i = 0; str[i] != '\0'; i++)
	_putchar (str[i]);

return (0);
}	
