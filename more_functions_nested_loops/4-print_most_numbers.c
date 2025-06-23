#include <stdio.h>
#include "main.h"

/**
* print_most_numbers - prints the numbers from 0 to 9
*
* Return: Return 0
*
*/

void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)/* start at 0; loop till 9; incrament 1 each loop */
{
if (n == 2 || n == 4)
continue;
_putchar (n + '0'); /* converting n to ASCI char, print */
}
_putchar ('\n');
}
