#include <stdio.h>
int main()
{
	int age;

	printf("Please enter yoour age:");
	scanf("%d", &age);
	if (age < 20) {
		printf("You're pretty young!\n");
	}
	else if (age==100) {
		printf("You're old\n");
	}
	else {
		printf("You're really old\n");
	}
		return 0;
}
