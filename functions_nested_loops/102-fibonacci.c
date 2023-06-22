#include <stdio.h>
/**
 * main - Entry point
 * Description: Program description.
 * Return: 0 All success
 */
int main(void)
{
	int i;
	unsigned long n1 = 1, n2 = 2, sum;

	printf("%lu, ", n1);
	printf("%lu, ", n2);
	for (i = 1; i <= 50; i++)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf("%lu", sum);
		if (i != 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
