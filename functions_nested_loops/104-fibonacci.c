#include <stdio.h>
/**
 * main - Entry point
 * Description: Program description.
 * Return: 0 All success
 */
int main(void)
{
	int i;
	unsigned long n1 = 1, n2 = 2, sum, n1m1, n1m2, n2m1, n2m2, m1, m2;

	printf("%lu, ", n1);
	printf("%lu, ", n2);
	for (i = 1; i <= 90; i++)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf("%lu, ", sum);
	}
	n1m1 = n1 / 10000000000;
	n1m2 = n1 % 10000000000;
	n2m1 = n2 / 10000000000;
	n2m2 = n2 % 10000000000;
	for (i = 91; i <= 96; i++)
	{
		m1 = n1m1 + n2m1;
		m2 = n1m2 + n2m2;
		if (n1m2 + n2m2 > 9999999999)
		{
			m1 += 1;
			m2 %= 10000000000;
		}
		printf("%lu%lu", m1, m2);
		if (i != 96)
		{
			printf(", ");
		}
		n1m1 = n2m1;
		n1m2 = n2m2;
		n2m1 = m1;
		n2m2 = m2;
	}
	printf("\n");
	return (0);
}
