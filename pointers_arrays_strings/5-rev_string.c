#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to be reversed
 *
 * Description: This function takes a pointer to a string and
 * reverses the characters in the string in place.
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	/* Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Reverse the string in place */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];  /* Swap characters */
		s[len - 1 - i] = temp;
	}
}
