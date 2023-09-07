#include <stdio.h>
/**
 * main -Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizesof(char));
	printf("Size of an int: %lu byte(s)\n", sizesof(int));
	printf("Size of a long int: %lu byte(s)\n", sizesof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizesof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizesof(float));
	return (0);
}
 
