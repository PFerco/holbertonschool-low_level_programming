#include <stdio.h>
/**
 * main - Entry point
 * Description: Program description.
 * Return: 0 All success
 */
int main(void)
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
		putchar('\n');
	}
	return (0);
}
