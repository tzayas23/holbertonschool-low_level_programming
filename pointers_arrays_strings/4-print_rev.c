#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string to be reversed
 *
 * Description: This function takes a pointer to a string and prints
 * the characters in reverse order, followed by a new line.
 */
void print_rev(char *s)
{
	int len = 0;

	/* Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print the string in reverse */
	while (len > 0)
	{
		_putchar(s[len - 1]);  /* Print the character at index len-1 */
		len--;
	}

	_putchar('\n');  /* Print a new line after the reversed string */
}
