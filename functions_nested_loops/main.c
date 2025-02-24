#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to test _abs function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = -10, num2 = 5, num3 = 0;

	printf("Absolute of %d: %d\n", num1, _abs(num1));
	printf("Absolute of %d: %d\n", num2, _abs(num2));
	printf("Absolute of %d: %d\n", num3, _abs(num3));

	return (0);
}
