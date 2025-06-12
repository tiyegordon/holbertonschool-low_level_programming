#include <stdio.h>
/**
 * main - prints a message following a new line.
 * Return: always 0
 */
int main(void)
{
char hex[] = "0123456789abcdef";
int i = 0; /**counter*/

while (hex[i] != '\0')
{
putchar(hex[i]);
i++;
}
putchar('\n');
return (0);
}
