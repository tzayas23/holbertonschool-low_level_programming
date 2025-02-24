#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to test print_last_digit function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = print_last_digit(1234);
	printf(" -> %d\n", r);

	r = print_last_digit(-5678);
	printf(" -> %d\n", r);

	r = print_last_digit(0);
	printf(" -> %d\n", r);

	return (0);
}
