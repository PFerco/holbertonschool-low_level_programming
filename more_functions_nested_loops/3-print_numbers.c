#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Entry point.
 * Description: Program description.
 * Return: 0 All success
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
