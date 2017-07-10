//Last three weird
//Given set of numbers where all elements occur an even amount of times except one. Find the odd occuring number. Set = 1 Unset = 0 // Sample: Input: [7,8,7,9,1,1,9,7,7] // Output: 8
#include <stdio.h>
int main()
{
	int a;
	printf("Give a number: ");
	scanf("%d", &a);

	if (a & 1) {
		printf("LSB is set");
	}
	else {
		printf("LSB is not set");
	}

	return 0;

}

