#include "main.h"
/**
 * _isdigit - Entry point.
 * @c: Variable
 * Description: Program description.
 * Return: 0 or 1 All success
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
