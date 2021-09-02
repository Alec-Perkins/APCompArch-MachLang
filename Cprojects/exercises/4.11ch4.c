// Exercise 4.11 Loop with counter
// A. Perkins
#include <stdio.h>

int main() {
	int sum = 0;
	for (int i = 1; i < 101; ++i) {
		if (i % 7 == 0) {
			sum += i;
		}
	}
	printf("Sum: %d", sum);
	return 0;
}