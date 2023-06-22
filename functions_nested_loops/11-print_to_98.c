#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point.
 * @n: Variable
 * Description: Program description.
 * Return: n or -n All success
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for ( ; n <= 97; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", n);
	} else
	{
		for ( ; n > 98 ; n--)
		{
			printf("%d\n", n);
		}
		printf("%d\n", n);
	}
}
