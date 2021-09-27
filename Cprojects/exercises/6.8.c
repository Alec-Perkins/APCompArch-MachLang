// Exercise 6.8
// A. Perins
#include <stdio.h>

int main()
{
    int scores[] = {81, 34, 23, 56, 67, 99, 88, 32, 23, 60};
    printf("%d\n", scores[6]);

    float waves[] = {8.1, 3.4, 2.3, 5.6, 6.7, 9.9, 8.8, 3.2, 2.3, 6.0};
    waves[3] = 3.3;

    int gross[5];
    for (size_t i=0; i<5; ++i)
    {
        gross[i] = 8;
    }

    float arr[20];
    for (size_t i=0; i<20; ++i)
    {
        arr[i] = 2.2;
    }
    float total = 0;
    for (size_t i=0; i<20; ++i)
    {
        total += gross[i];
    }

}