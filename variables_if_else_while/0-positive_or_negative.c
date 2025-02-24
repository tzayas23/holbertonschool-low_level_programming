#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program assigns a random number to the variable `n`
 * each time it is executed and prints whether the number is positive,
 * negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0)); /* Seed the random number generator */
    n = rand() - RAND_MAX / 2; /* Generate a random number */

    printf("%d ", n); /* Print the number */

    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        printf("is negative\n");
    }

    return (0);
}
