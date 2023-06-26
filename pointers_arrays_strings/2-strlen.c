#include "main.h"
/**
 * _strlen - Entry point.
 * @s: Variable for pointer.
 * Description: Program description.
 * Return: n or -n All success
 */
int _strlen(char *s)
{
	int n;

	while (*s++)
		n++;
	return (n);
}
