#include "main.h"
#include <stdio.h>  /* Include this line for printf */

int main(void)
{
	char str[] = "Hello, World!";

	rev_string(str);  /* Call the rev_string function to reverse the string */

	printf("%s\n", str);  /* Print the reversed string */

	return (0);
}
