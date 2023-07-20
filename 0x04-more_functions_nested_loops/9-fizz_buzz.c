#include "main.h"

/**
 * fizz_buzz - Prints numbers from 1 to 100 with conditions
 * 'Fizz' for multiples of 3, 'Buzz' for multiples of 5,
 * 'Fizzbuzz for multiples of both
 */
int main(void) {
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			printf("FizzBuzz ");
		} else if (i % 3 == 0) {
			printf("Fizz ");
		} else if (i % 5 == 0) {
			printf("Buzz ");
		} else {
			printf("%d ", i);
		}
	}

	printf("\n");
	return 0;
}
