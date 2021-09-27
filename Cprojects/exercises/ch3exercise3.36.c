// Exercise 3.36 How Fast Is Your Computer?
// A. Perkins

#include <stdio.h>
#include <time.h>

int main (){
	unsigned int count = 1;
	double time_spent = 0;
	clock_t begin = clock();
	while (count <= 1000000000) {
		if (count % 100000000 == 0) {
			clock_t end = clock();
			time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
			printf("%.3fs: ", time_spent);
			printf("%u\n", count);
			begin = clock();
		}
		++count;
	}
	return 0;
}