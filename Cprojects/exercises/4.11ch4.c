// Exercise 4.11 Find the Smallest
// A. Perkins
#include <stdio.h>

int main() {
	int numVal, smallest, test;
	printf("Enter the amount of values: ");
	scanf("%d", &numVal);
	for (int i = 0; i < numVal; ++i) {
		printf("Enter an integer: ");
		scanf("%d", &test);
		if ( test < smallest ) {
			smallest = test;
		}
	}
	printf("The smallest value was: %d", smallest);
	return 0;
}