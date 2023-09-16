#include <stdio.h>

int main(void)
{
	int counter = 0;

	int chara = getchar();

	while(chara != EOF)
	{
		chara = getchar();
		counter = counter + 1;
	}

	counter = counter - 1;
	printf("Counted: %i", counter);
}
