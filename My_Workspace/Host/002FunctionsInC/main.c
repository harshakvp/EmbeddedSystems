#include <stdio.h>

int function_add_numbers(int a, int b, int c);

int main(void) {
	int sum = function_add_numbers(12, 13, 14);
	printf("Sum = %d", sum);
	return 0;
}

int function_add_numbers(int a, int b, int c) {
	int sum;
	sum = a + b + c;
	// printf("Sum = %d", sum);
	return sum;
}
