#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: Pointer to the string to be printed
 *
 * Description: This function takes a pointer to a string and prints
 * each character until it reaches the null terminator, followed by
 * a new line.
 */
void _puts(char *str)
{
	while (*str != '\0')  /* Loop through each character in the string */
	{
		_putchar(*str);    /* Call _putchar to print one character */
		str++;             /* Move to the next character */
	}
	_putchar('\n');         /* Print a new line after the string */
}
