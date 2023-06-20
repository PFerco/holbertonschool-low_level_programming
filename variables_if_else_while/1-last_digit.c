#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Program description.
 * Return: 0 All success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int digit = n % 10;
	if (digit > 5)
	{
		printf("Last digit of %d is and is greater than 5\n", n);
	} else if (n == 0)
	{
		printf("Last digit of %d is and is 0\n", n);
	} else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is and is less than 6 and not 0\n", n);
	}
	return (0);
}
