#include <stdio.h>
/**
 * main - Entry point
 * Description: Program description.
 * Return: 0 All success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i<= 'f'; i++)
	{
		putchar(i);
	}
	putchar('/n');
	return (0);
}
