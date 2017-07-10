//Write a C program to clear nth bit of a number.
#include <stdio.h>
int main()
{
	int a, n;
	
	printf("Give a number:");
	scanf("%d", &a);

	printf("What bit?");
	scanf("%d", &n);

	int answer = a &= ~(1 << n);
printf("%d", answer);
}
