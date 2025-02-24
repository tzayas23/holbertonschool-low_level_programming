#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet first,
 * then the uppercase alphabet, followed by a new line.
 * It uses only the putchar function three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}

for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}

putchar('\n');

return (0);
}
