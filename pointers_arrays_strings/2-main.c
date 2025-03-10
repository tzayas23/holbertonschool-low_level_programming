#include <stdio.h>
#include "main.h"

int main(void)
{
	char str[] = "Hello, World!";
	int len;

	len = _strlen(str);
	printf("Length of \"%s\": %d\n", str, len);

	return (0);
}
