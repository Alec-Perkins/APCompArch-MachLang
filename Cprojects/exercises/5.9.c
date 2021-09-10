// I read the self review
// 5.9 Parking Charges
// A. Perkins
# include <stdio.h>
# include <math.h>

float calculateCharges(float hours);

int main() {
	float hours1, hours2, hours3;
	printf("Enter three customers hours: ");
	scanf("%f%f%f", &hours1, &hours2, &hours3);
	float charge1 = calculateCharges(hours1);
	float charge2 = calculateCharges(hours2);
	float charge3 = calculateCharges(hours3);
	printf("Car        Hours     Charge\n");
	printf("1     %10.2f %10.2f\n", hours1, charge1);
	printf("2     %10.2f %10.2f\n", hours2, charge2);
	printf("3     %10.2f %10.2f\n", hours3, charge3);
	printf("TOTAL %10.2f %10.2f\n", hours1+hours2+hours3, charge1+charge2+charge3);
	return 0;
}

float calculateCharges(float hours) {
	if ( hours <= 3 ) {
		return 2.0;
	} else if( hours < 19 ) {
		if ( (int)(hours*10) % 10 > 0 ) {
			return ((double)2.0 + ((int)(hours+1) - 3) / 2.0);
		}
		return (double)2.0 + ((hours - 3) / 2.0);
	}
	return 10.0;
}