#include <unistd.h>

/**
 * _putchar - writes a character to standard output
 * @c: The character to print
 *
 * Return: On success 1, on error -1.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
 _putchar(letter);
letter++;
}
 _putchar('\n');
}
