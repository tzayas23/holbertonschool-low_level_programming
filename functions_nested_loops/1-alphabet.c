#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 *
 * Return: void
 */
void print_alphabet(void)
{
    char *alphabet = "abcdefghijklmnopqrstuvwxyz";

    /* Print the alphabet */
    while (*alphabet)
    {
        _putchar(*alphabet);
        alphabet++;
    }

    /* Print a new line */
    _putchar('\n');
}

/**
 * _putchar - writes a character to standard output
 * @c: The character to print
 *
 * Return: On success 1, on error -1.
 */
int _putchar(char c)
{
return write(1, &c, 1);
}
