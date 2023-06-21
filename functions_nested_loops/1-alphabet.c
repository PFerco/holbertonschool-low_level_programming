#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: Program description.
 * Return: 0 All success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
