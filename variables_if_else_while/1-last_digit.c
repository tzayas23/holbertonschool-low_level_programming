#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program assigns a random number to the variable `n`
 * each time it is executed and prints the last digit of `n`, followed by:
 *   - "and is greater than 5" if the last digit is > 5
 *   - "and is 0" if the last digit is 0
 *   - "and is less than 6 and not 0" if the last digit is < 6 and not 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last_digit;

srand(time(0)); /* Seed the random number generator */
n = rand() - RAND_MAX / 2; /* Generate a random number */
last_digit = n % 10; /* Get the last digit of n */

printf("Last digit of %d is %d ", n, last_digit);

if (last_digit > 5)
{
printf("and is greater than 5\n");
}
else if (last_digit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}

return (0);
}
