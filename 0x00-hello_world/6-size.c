#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu bytes(s)\n", sizesof(char));
	printf("Size of an int: %lu bytes(s)\n", sizesof(int));
	printf("Size of a long int: %lu bytes(s)\n", sizesof(long int));
	print("Size of a long long int: %lu bytes(s)\n", sizesof(long long int));
	print("Size of a float: %lu bytes(s)\n", sizesof(float));
	return (0);
}
