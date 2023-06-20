#include <stdio.h>
/**
 * main - Entry point
 * Description: Program description.
 * Return: 0 All success
 */
int main(void)
{
	int character
	for (character = 'A'; character <= 'Z'; character++)
	{
		character = tolower(character);
		putchar(character);
	}
	return (0);
}
