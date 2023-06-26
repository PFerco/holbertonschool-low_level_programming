#include <stdio.h>
/**
 * main - Entry point
 * Description: Program description.
 * Return: 0 All success
 */
int main(void)
{
	long n = 612852475143, np1, np2;

	for (np1 = 2; (np1 < 612852475143 / 2) && (n % np1 == 0); )
	{
		for (np2 = np1; n % np2 == 0; )
		{
			n /= np2;
			np2++;
		}
	}
	printf("%ld\n", np2);
	return (0);
}
