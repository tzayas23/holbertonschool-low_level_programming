#include <stdio.h>

void _putchar(char c) {
	putchar(c);
}

void print_alphabet_x10(void) {
	int i;
	char letter;

	for (i = 0; i < 10; i++) {
		for (letter = 'a'; letter <= 'z'; letter++) {
			_putchar(letter);
		}
		_putchar('\n');  // Print new line after each repetition
	}
}

int main() {
	print_alphabet_x10();  // Call the function to print the alphabet 10 times
	return 0;
}

