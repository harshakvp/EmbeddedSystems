#include <stdio.h>
#include "math.h"

int main(void){
	printf("Add: %d\n", math_add(113, 67));
	printf("Add: %d\n", math_sub(113, 67));
	printf("Add: %lld\n", math_mul(113, 67));
	printf("Add: %f\n", math_div(113, 67));
	return 0;
}
