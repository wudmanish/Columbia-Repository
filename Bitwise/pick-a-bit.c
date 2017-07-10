//Write a C program to get nth bit of a number.
#include <stdio.h>
int main()
{
	int a, n;

	printf("Give a number: ");
	scanf("%d", &a);

	printf("What bit?");
	scanf("%d", &n);

	if(a & n){

	printf("0");
} else{
	printf("1");

}
return 0;
}

//a + a = 0
//a + 0 = a
