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
		puts(*str++);
	puts('\n');
}
