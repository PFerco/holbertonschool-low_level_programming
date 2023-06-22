#include "main.h"
/**
 * _isupper - Entry point.
 * @c: Variable
 * Description: Program description.
 * Return: 0 or 1 All success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
}
