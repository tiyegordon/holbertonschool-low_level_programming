#include "main.h"

/**
* Description: more_numbers - prints the numbers from 0 to 14, 10x
*
* Return: Return 0
*
*/

void more_numbers(void)
{
int i, n; /* declare variables n and i */
for (i = 0; i < 10; i++) /* outer loop*/
{
for (n = 0; n <= 14; n++) /* start at 0; loop till 14; incrament 1 each loop */
{
if (n >= 10)
_putchar ((n / 10) + '0');
_putchar ((n % 10) + '0');/* prints 1s digit, convert to ASCI print */
}

_putchar ('\n'); /*print a new line */
}
}
