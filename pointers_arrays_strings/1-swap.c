#include "main.h"
/**
 * swap_int - Entry point.
 * @a: Variable for pointer.
 * @b: Variable for pointer.
 * Description: Program description.
 * Return: Void All success
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
