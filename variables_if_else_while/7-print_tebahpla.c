#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet in reverse,
 * from 'z' to 'a', followed by a new line. It uses only the putchar
 * function twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}

putchar('\n');

return (0);
}
