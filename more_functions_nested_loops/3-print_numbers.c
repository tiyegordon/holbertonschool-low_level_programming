#include "main.h"

/**
* Description: print_numbers - prints the numbers from 0 to 9
* Return: Return 0
*
*/

void print_numbers(void)

{
int n;
for (n = 0; n <= 9; n++)
_putchar (n + '0'); /* converting n to ASCI char, print */
_putchar ('\n'); /*print a new line */
}
