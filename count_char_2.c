#include <stdio.h>

int main(void)
{
	long counter = 0;

	int chara;
	for(; getchar() != EOF; ++counter)
		;

	printf("Counted: %ld\n", counter);
}
