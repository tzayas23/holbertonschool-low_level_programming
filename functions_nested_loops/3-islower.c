#include <stdio.h>

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character (given as an integer value).
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')  /* Check if c is between 'a' and 'z' in ASCII */
    {
        return 1;  /* c is lowercase */
    }
    return 0;  /* c is not lowercase */
}

/**
 * Main function to test _islower
 */
int main(void)
{
    /* Test valid lowercase letters */
    char test1 = 'a';
    printf("%c: %d\n", test1, _islower(test1));  /* Expected 1 */
    
    char test2 = 'z';
    printf("%c: %d\n", test2, _islower(test2));  /* Expected 1 */

    /* Test uppercase letters */
    char test3 = 'A';
    printf("%c: %d\n", test3, _islower(test3));  /* Expected 0 */

    /* Test non-alphabet characters */
    char test4 = '1';
    printf("%c: %d\n", test4, _islower(test4));  /* Expected 0 */
    
    char test5 = '@';
    printf("%c: %d\n", test5, _islower(test5));  /* Expected 0 */
    
    /* Test characters after 'z' */
    char test6 = '{';
    printf("%c: %d\n", test6, _islower(test6));  /* Expected 0 */
    
    return 0;
}
