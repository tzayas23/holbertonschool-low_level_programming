#include "main.h"

/**
 * puts2 - Prints every other character of a string starting from the first character
 * @str: Pointer to the string
 *
 * Description: This function takes a pointer to a string and prints every other
 * character starting from the first character. It also prints a new line after
 * the string.
 */
void puts2(char *str)
{
	int i = 0;

	/* Loop through the string */
	while (str[i] != '\0')
	{
		if (i % 2 == 0)  /* Check if the index is even */
		{
			_putchar(str[i]);
			/* Print the character at the even index */
		}
		i++;
	}

	_putchar('\n');
	/* Print a new line after the string */
}
