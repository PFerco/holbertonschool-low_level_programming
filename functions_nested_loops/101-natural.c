#include <stdio.h>
/**
 * main - Entry point.
 * Description: Program description.
 * Return: sum.
 */
void main(void)
{
	int sum = 0;
	int i;

	for (i = 2; i < 1024; i++)
	{
		if (1024 % i == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
}
