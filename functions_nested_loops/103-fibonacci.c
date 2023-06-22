#include <stdio.h>
/**
 * main - Entry point
 * Description: Program description.
 * Return: 0 All success
 */
int main(void)
{
	int i;
	unsigned long n1 = 1, n2 = 2, sum, suma = 2;

	for (i = 1; i <= 48; i++)
	{
		if (sum < 4000000)
		{
			sum = n1 + n2;
			n1 = n2;
			n2 = sum;
			if (sum % 2 == 0)
			{
				suma += sum;
			}
		}
	}
	printf("%lu\n", suma);
	return (0);
}
