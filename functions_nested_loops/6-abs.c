#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
  * _abs - Computes the absolute value of an integer.
  * @c: the integer to evaluate
  * Return: the abosolute value of the integer
  *
  */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
