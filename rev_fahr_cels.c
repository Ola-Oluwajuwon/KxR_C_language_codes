#include <stdio.h>

/*
 * This program converts Fahrenheit to Celsius
 * for F = 0, 20, ..., 300
 * in the reverse order
 */

int main() {
	float fahr;

	for(fahr = 300; fahr >= 0; fahr = fahr - 20) {
		printf("%4.0f %6.1f\n", fahr, ((5.0/9.0) * (fahr - 32.0)));
	}
}
