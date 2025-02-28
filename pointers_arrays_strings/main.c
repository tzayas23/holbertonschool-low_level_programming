#include <stdio.h>
#include "main.h"

/**
 * main - Tests the reset_to_98 function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num = 42;

    printf("Before: %d\n", num);
    reset_to_98(&num);
    printf("After: %d\n", num);

    return (0);
}
