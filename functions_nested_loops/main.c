#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to test _islower function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c1 = 'a', c2 = 'Z';

	printf("%c is lowercase? %d\n", c1, _islower(c1));
	printf("%c is lowercase? %d\n", c2, _islower(c2));

	return (0);
}
