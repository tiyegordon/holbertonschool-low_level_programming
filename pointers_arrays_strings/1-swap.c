#include "main.h"

/**
  * swap_int - swaps the location of 2 numbers
  * @a: integer 1, value of 98
  * @b: integer 2, value of 42
  * Return: Nothing (void)
  */

void swap_int(int *a, int *b)

{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
