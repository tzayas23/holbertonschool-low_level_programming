#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to test add function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum;

	sum = add(3, 5);
	printf("3 + 5 = %d\n", sum);

	sum = add(-10, 4);
	printf("-10 + 4 = %d\n", sum);

	sum = add(0, 0);
	printf("0 + 0 = %d\n", sum);

	return (0);
}
