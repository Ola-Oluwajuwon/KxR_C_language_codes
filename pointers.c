#include <stdio.h>

int main(void)
{
	int age = 25;
	int* ptr = &age;

	printf("Memory address is: %p\n", ptr);

/**
*	printf("With address:\n");
*
*	printf("%p\n", &age);
*/
	printf("ptr value: %i\n", *ptr);
}
