// Exercise 10.10 and 10.11
// A. Perkins

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void bin(unsigned int n);


int main()
{
    unsigned int n;
    printf("Enter an integer: ");
    scanf("%u", &n);
    unsigned int newN = n>>4;
    printf("The old integer in binary: ");
    bin(n);
    printf("\nThe new integer in binary: ");
    bin(newN);
}

void bin(unsigned int n)
{
    static int count = 0;
    if (n > 1)
        bin(n / 2);
    printf("%u", n % 2);
}