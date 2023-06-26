#include <stdio.h>
/**
 * main - Entry point
 * Description: Program description.
 * Return: 0 All success
 */
int main(void)
{
	long n = 612852475143, np1;

	for (np1 = 2; np1 < 612852475143 / 2; np1++)
	{
		while (n % np1 == 0)
		{
			n /= np1;
		}
	}
	printf("%ld\n", n);
	return (0);
}
