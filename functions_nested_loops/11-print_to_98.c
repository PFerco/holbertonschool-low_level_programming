#include "main.h"
/**
 * print_to_98 - Entry point.
 * @n: Variable
 * Description: Program description.
 * Return: n or -n All success
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for ( ; n <= 98; n++)
		{
			if (n < 0)
			{
				i = -1;
			} else
			{
				i = 1;
			}
			if ((n / 10) * i > 0)
			{
				if (i = -1)
				{
					_putchar('-');
					_putchar((n / 10) + '0');
				} else
					_putchar((n / 10) + '0');
			}
			_putchar((n % 10) * i + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
