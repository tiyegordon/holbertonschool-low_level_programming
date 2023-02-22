#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;
	printf("Last digit of %i is %i/n ", n, lastDigit);
	if (lastDigit > 5)
	{
		printf("is greater than 5");
	}
	if (n == 0)
	{
		printf("and is 0", n);
	}
	if (n < 6 && n != 0)
	{
		printf("and is less than 6 and not 0");
	}
	return (0);
