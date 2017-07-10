//Write a C program to check Most Significant Bit (MSB) of a number is set or not.
#include <stdio.h>
int main()
{
	int a, msb;
	printf("Give a number: ");
	scanf("%d", &a);

	msb = 1 << (sizeof(int)*8 - 1);

	if(a & msb) {
		printf("MSB is set");
} else {
		printf("MSB is not set");
	}

	return 0;
	}

