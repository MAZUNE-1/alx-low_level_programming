#include <stdio.h>

/**
 * main - The main function
 * 1 and 2, seperated by a comma
 * Return: 0.
 */

int main(void)
{
	int n, first = 1, second = 2, next, c;

			printf("Enter the number of terms\n");
			scanf("%d", &n);

			printf("First %d terms of Fibonacci series are:\n", n);

			for (c = 0; c < 92; c++)
			{
			if (c <= 1)
			next = c;
			else
			{
				next = first + second;
				first = second;
				second = next;
			}
			printf("%d\n", next);
			}

 		 return (0);
}
