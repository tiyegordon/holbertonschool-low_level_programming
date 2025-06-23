#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
  * print_to_98 - prints all natural numbers from n to 98
  * @n:The starting integer
  * Return: Nothing (void)
  */

void print_to_98(int n) /* Prints all natural numbers from n to 98*/
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}

else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
