#include <stdio.h>

int main(void){
	char a1 = 'H';
	/*char a2 = 'A';
	char a3 = 'R';
	char a4 = 'S';
	char a5 = 'H';
	char a6 = 'A';
	char a7 = 'K';*/

	unsigned long long int addressOfa1 = (unsigned long long int) &a1;

	printf("Address of variable a1 = %llx\n", addressOfa1);
	/*printf("Address of variable a2 = %p\n", &a2);
	printf("Address of variable a3 = %p\n", &a3);
	printf("Address of variable a4 = %p\n", &a4);
	printf("Address of variable a5 = %p\n", &a5);
	printf("Address of variable a6 = %p\n", &a6);
	printf("Address of variable a7 = %p\n", &a7);*/


	return 0;
}
