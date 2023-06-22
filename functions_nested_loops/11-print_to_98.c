#include "main.h"
/**
 * print_to_98 - Entry point.
 * @n: Variable
 * Description: Program description.
 * Return: n or -n All success
 */
void print_to_98(int n)
{
	for ( ; n <= 98; n++)
	{
		_putchar(n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
