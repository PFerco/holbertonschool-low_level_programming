#include "main.h"
/**
 * _puts - Entry point.
 * @str: Variable for pointer.
 * Description: Program description.
 * Return: Void All success
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
