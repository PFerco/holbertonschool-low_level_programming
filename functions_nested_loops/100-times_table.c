#include "main.h"
/**
 * print_times_table - Entry point.
 * @n: Variable
 * Description: Program description.
 * Return: Void
 */
void print_times_table(int n)
{
	int i, j;

	if (0 <= n && 15 >= n)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				if ((i * j) / 10 > 0)
				{
					_putchar((i * j) / 100 + '0');
				} else
				{
					_putchar(' ');
				}
				if ((i * j) / 10 > 0)
				{
					_putchar((i * j) / 10 + '0');
				} else if (j != 0)
				{
					_putchar(' ');
				}
				_putchar((i * j) % 10 + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
