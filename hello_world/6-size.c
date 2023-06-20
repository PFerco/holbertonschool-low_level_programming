#include <stdio.h>
/**
 * main - Entry point
 * Description: Program that prints the size of various types
 * Return: 0 All success
 */
int main(void)
{
	printf("Size of a char: %s", sizeof(char));
	printf("Size of an int: %s", sizeof(int));
	printf("Size of a long int: %s", sizeof(int long));
	printf("Size of a long long int: %s", sizeof(int long long));
	printf("Size of a float: %s", sizeof(float));
}
