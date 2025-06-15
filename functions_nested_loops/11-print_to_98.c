#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
  * Prints all natural numbers from n to 98, followed by a new line.
  *@n:The starting integer
  *
  * Description: If n> 98, counts down. If n< 98, counts up. If n == 98, prints.
  * Returns integer
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
