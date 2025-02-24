#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of
 * single-digit numbers in ascending order, separated by ", ".
 * It uses only the putchar function four times, and does not use
 * any variables of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
    {
putchar(num + '0');    /* print number */
if (num != 9)
        {
putchar(',');      /* print comma */
putchar(' ');      /* print space */
        }
    }

putchar('\n');  /* new line after printing all numbers */

return (0);
}
