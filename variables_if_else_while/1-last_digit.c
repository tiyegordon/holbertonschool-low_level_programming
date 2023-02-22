#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %s %d is %d and is ", last, n, n %);
	if (n % >)
	{
		printf("and is greater than \n");
	}
	else if (n % ==)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0 \n");
	}
	return (0);
}
