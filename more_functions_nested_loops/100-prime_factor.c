#include <stdio.h>
/**
 * main - Entry point
 * Description: Program description.
 * Return: 0 All success
 */
int main(void)
{
	long n = 612852475143, np1;

	while (np1 < 612852475143 / 2)
	{
		if ((n % 2) == 0)
		{
			n /= 2;
			continue;
		}
		for (np1 = 3; np1 < (n / 2); np1 += 2)
		{
			if ((n % np1) == 0)
				n /= np1;
		}	
	}
	printf("%ld\n", n);
	return (0);
}
