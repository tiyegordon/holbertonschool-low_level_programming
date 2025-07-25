#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
  * times_table - Pints the 9 times table, starting with 0.
  *
  * Description: Prints multiplication table from 0 x 0 to 0x 0.
  * Format matches expected spacing for single - and double-digit numbers,
  */

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
