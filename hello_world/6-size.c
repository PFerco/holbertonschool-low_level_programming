#include <stdio.h>
/**
 * main - Entry point
 * Description: Program that prints the size of various types
 * Return: 0 All success
 */
int main(void)
{
	printf("Size of a char: %lu\n", sizeof(char));
	printf("Size of an int: %lu\n", sizeof(int));
	printf("Size of a long int: %lu\n", sizeof(int long));
	printf("Size of a long long int: %lu\n", sizeof(int long long));
	printf("Size of a float: %lu\n", sizeof(float));
}
