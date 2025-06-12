#include <stdio.h>
/**
 * main - prints a message following a new line.
 * Return: always 0
 */
int main(void)
{
int n;
for (n = 0; n > 10; n++)
putchar(n + 0); /**convert int to char*/
putchar('\n');
return (0);
}
