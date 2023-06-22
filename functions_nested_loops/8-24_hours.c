#include "main.h"
/**
 * jack_bauer - Entry point.
 * Description: Program description.
 * Return: Empty
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 00; h < 24; h++)
	{
		for (m = 00; m < 60; m++)
		{
			_putchar(h);
			_putchar(':');
			_putchar(m + '0');
		}
	}
}
