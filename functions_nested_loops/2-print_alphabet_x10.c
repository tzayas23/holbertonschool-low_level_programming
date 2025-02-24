#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 * followed by a new line each time.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int i;
char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

for (i = 0; i < 10; i++)
{
_putchar(alphabet);`
}
}

/**
 * _putchar - writes a character to standard output
 * @c: The character to print
 *
 * Return: On success 1, on error -1.
 */
int _putchar(char c)
{
return write(1, &c, 1);  /* write system call to print the character */
}
