#include <stdio.h>
/**
 * main - Entry point
 * Description: Program description.
 * Return: 0 All success
 */
int main(void)
{
	int i, n1 = 1, n2 = 2, sum;

	printf("%d, ", n1);
	printf("%d, ", n2);
	for (i = 1; i <= 50; i++)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf("%d", sum);
		if (i != 50)
		{
			printf(", ");
		}
	}
}
