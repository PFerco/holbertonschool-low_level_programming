#include <stdio.h>
/**
 * main - Entry point
 * Description: Program description.
 * Return: 0 All success
 */
int main(void)
{
	int i;

	for(i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		putchar(', ');
	}
	return (0);
}
