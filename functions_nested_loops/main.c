#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to test _isalpha function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c1 = 'b', c2 = 'G', c3 = '5';

	printf("%c is alphabetic? %d\n", c1, _isalpha(c1));
	printf("%c is alphabetic? %d\n", c2, _isalpha(c2));
	printf("%c is alphabetic? %d\n", c3, _isalpha(c3));

	return (0);
}
