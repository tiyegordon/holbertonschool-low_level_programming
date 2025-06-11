#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints a message following a new line.
 * Return: always 0
 */
int main(void)
{
int n;
int lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints a message following a new line.
 * Return: always 0
 */
int main(void)
{
int n;
int lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (lastDigit > 5)
{
printf("Last digit of %i and is greater than 5\n", n);
}
else if (lastDigit == 0)
{
printf("Last digit of %i and is 0\n", n);
}
else
{
printf("Last digit of %i and is less than 6 and not 0\n", n);
}
return (0);
}
