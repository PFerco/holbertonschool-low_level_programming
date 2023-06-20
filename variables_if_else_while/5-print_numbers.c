#include <stdio.h>
/**
 * main - Entry point
 * Description: Program description.
 * Return: 0 All success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		print("$d", i);
	}
	print("\n");
	return (0);
}
