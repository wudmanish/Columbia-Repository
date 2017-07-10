#include <stdio.h>
int main()
{
	int n, o;
	printf("Input the first number : ");
	scanf("%d", &n);
	printf("input the second number : ");
	scanf("%d", &o);
	
	if(n > o){
	printf("%p is greater than %d\n", n, o);
}

	if(o > n){
	printf("%d is greater than %p\n", o, n);
}
}
