#include "main.h"
/**
 * print_last_digit - Entry point.
 * @n: Variable
 * Description: Program description.
 * Return: n or -n All success
 */
int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (d < 0)
		d *= -1;
	_putchar(d + '0');
	return (d);
}
