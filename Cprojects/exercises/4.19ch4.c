// Exercise 4.19 Switch statement
// A. Perkins
#include <stdio.h>

int main() {
	int prodNum, quant;
	float total;
	printf("Enter one of the product numbers(-1 to end): ");
	scanf("%d", &prodNum);
	while (prodNum != -1) {
		printf("Enter the quantity of this item purchased: ");
		scanf("%d", &quant);
		switch(prodNum) {
			case 1:
				total += ((float)quant * 2.98);
				break;
			case 2:
				total += ((float)quant * 4.50);
				break;
			case 3:
				total += ((float)quant * 9.98);
				break;
			case 4:
				total += ((float)quant * 4.49);
				break;
			case 5:
				total += ((float)quant * 6.87);
				break;
			default:
				printf("Product Number entered is not valid\n");
				break;
		}
		printf("Enter one of the product numbers(-1 to end): ");
		scanf("%d", &prodNum);
	}
	printf("The grand total is: $%.2f", total);