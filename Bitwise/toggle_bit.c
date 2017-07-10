#include <stdio.h>
int main(){
int a, b;
	
	printf("Give a number:");
	scanf("%d", &a);

	printf("What bit?");
	scanf("%d", &b);
	int answer = a ^= 1 << b;
	printf("%d", answer);
}
