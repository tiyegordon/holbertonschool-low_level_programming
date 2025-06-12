#include <stdio.h>
/**
 * main - prints a message following a new line.
 * Return: always 0
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);
putchar('\n');
return (0);
}
