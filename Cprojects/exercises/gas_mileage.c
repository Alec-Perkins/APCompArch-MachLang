// Gas Mileage Exercise
// A. Perkins
#include <stdio.h>

int main() {
	float gal = 0;
	unsigned int mile;
	float mpg;
	float average_mpg;
	unsigned int counter = 0;
	while (1) {
		printf("Enter the gallons used (-1 to end): ");
		scanf("%f", &gal);
		if (gal == -1) {
			printf("\n");
			break;
		}
		printf("Enter the miles driven: ");
		scanf("%u", &mile);
		mpg = mile / gal;
		printf("The miles/gallon for this tank was %f\n\n", mpg);
		average_mpg += mpg;
		++counter;
	}
	average_mpg /= counter;
	printf("The overall average miles/gallon was %f\n", average_mpg);
	return 0;
}

