#include "main.h"
/**
 * print_line - Entry point.
 * @n: Variable
 * Description: Program description.
 * Return: Void All success
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
