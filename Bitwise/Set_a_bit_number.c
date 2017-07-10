//Write a C program to set nth bit of a number.
#include <stdio.h>
int main()
{
	int a, n;

	printf("Give a number:");
	scanf("%d", &a);

	printf("What bit?");
	scanf("%d", &n);

	 if (a & n) { 

 int answer = a |= 1 << n;
printf("%d", answer);
}
	
	else {
		printf("Already Set");
	}
	
return 0;
}


