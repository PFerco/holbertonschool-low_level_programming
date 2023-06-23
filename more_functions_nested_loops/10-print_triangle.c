#include "main.h"
/**
 * print_triangle - Entry point.
 * @size: Variable
 * Description: Program description.
 * Return: void All success
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for (i = 1; i <= size - j; i++)
			{
				_putchar(' ');
			}
			for (i = size - j; i < size; i++)
			{
				_putchar('#');
			}
		}
	}
	_putchar('\n');
}
