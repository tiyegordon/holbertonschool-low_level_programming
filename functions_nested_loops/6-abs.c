#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
  * Computes the absolute value of an integer.
  *
  * Return: Always 0
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
