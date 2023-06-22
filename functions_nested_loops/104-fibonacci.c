#include <stdio.h>
/**
 * main - Entry point
 * Description: Program description.
 * Return: 0 All success
 */
int main(void)
{
	int i;
	unsigned long long n1 = 1, n2 = 2, sum;

	printf("%llu, ", n1);
	printf("%llu, ", n2);
	for (i = 1; i <= 96; i++)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf("%llu", sum);
		if (i != 96)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
