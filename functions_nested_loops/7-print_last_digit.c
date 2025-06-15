#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
  * Prints the last digit of a number.
  *
  * Returns the value of the last digit.
  */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}

