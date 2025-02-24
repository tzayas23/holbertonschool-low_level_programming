#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all numbers of base 16 in lowercase,
 * followed by a new line. It uses only the putchar function three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
putchar(num + '0');
}

for (num = 'a'; num <= 'f'; num++)
{
putchar(num);
}

putchar('\n');

return (0);
}
