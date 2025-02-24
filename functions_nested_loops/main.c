#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to test print_sign function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int result;

	result = print_sign(5);
	printf(" -> %d\n", result);

	result = print_sign(0);
	printf(" -> %d\n", result);

	result = print_sign(-3);
	printf(" -> %d\n", result);

	return (0);
}

