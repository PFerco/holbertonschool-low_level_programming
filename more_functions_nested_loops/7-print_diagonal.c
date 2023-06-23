#include "main.h"
/**
 * print_diagonal - Entry point.
 * @n: Variable
 * Description: Program description.
 * Return: Void All success
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
