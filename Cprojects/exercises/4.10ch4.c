// Exercise 4.10 Loop with sentinel value
// A. Perkins
#include <stdio.h>

int main() {
	int cel;
	float far;
	for(cel = 30; cel < 51; ++cel) {
		far = (((float)9/5)*cel) + 32;
		printf("Celcius: %d\t", cel);
		printf("Fahrenheit: %f\n", far);
	}
	return 0;
}