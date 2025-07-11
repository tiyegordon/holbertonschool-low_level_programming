#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
  * print_sign - Prints the sign of a number
  * @n : The number to check
  *
  * Return: 1 if postive, 0 if zero, -1 for negative num
  *
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
