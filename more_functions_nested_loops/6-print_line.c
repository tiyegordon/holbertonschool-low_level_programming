#include "main.h"

/**
* Description: print_line - draw a straight line in terminal using '_'
* @n: # of lines to draw
* Return: empty
*
*/

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95); /* ASCI value for '_' */
		}

		_putchar('\n');
	}
}
