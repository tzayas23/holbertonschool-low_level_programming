#include <stdio.h>
#include "main.h"
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
