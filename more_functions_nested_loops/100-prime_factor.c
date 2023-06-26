#include <stdio.h>
/**
 * main - Entry point
 * Description: Program description.
 * Return: 0 All success
 */
int main(void)
{
	long n = 612852475143, np;

	for (np = 2; (np < 612852475143 / 2) && (n % np == 0); np++)
	{
		n /= np;
	}
	printf("%ld\n", np);
	return (0);
}
