// Exercise 3.35 Decimal equivalent of binary
// A. Perkins

#include <stdio.h>

int main(){
    unsigned int bin;
    unsigned int decimal = 0;
    unsigned int place = 1;

    printf("Input a binary number (5 digits or fewer): ");
    scanf("%u", &bin);

    while (bin > 0){
        decimal += ((bin % 10) * place);
        bin /= 10;
        place *= 2;
    }

    printf("decimal: %u\n", decimal);
    return 0;
}