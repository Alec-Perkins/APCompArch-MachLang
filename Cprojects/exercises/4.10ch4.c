// Exercise 4.10 Average a Sequence of Integers
// A. Perkins
#include <stdio.h>

int main() {
	float avg = 0;
	int test,denom = 0;
	printf("Enter an integer (9999 to end program): ");
	scanf("%d", &test);
	while (test != 9999) {
		avg += test;
		++denom;
		printf("Enter an integer (9999 to end program): ");
		scanf("%d", &test);
	}
	avg = avg / (float)denom;
	printf("The average is %f", avg);
	return 0;
}