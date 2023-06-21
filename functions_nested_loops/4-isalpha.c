#include "main.h"
/**
 * _isalpha - Entry point
 * @c: Variable
 * Description: Program description.
 * Return: 0 or 1 All success
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'Z')
		return (1);
	else
		return (0);
}
