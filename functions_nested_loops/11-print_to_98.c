#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
  * Prints all natural numbers from n to 98, followed by a new line.
  *
  * Returns 0
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
