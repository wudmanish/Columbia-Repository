#include <stdio.h>
int main()
{
	int num;
	int *ab, *p;

	num = 68;
	p = &num;

	printf("Address of P : %p\n", p);
	printf("Value of P : %d\n", *p);

	ab = p;


	printf("Now ab is assigned with the address of p.");
	printf("Address of pointer ab : %p\n", ab);
	printf("Content of pointer ab : %d\n", *ab);


	p = 19;

	printf("The value of p is assigned to 19 now.");
	printf("Address of pointer ab: %p\n", p);
	printf("Content of pointer ab: %d\n", *p);

	ab = 80;

	printf("The pointer variable ab is assigned with the value of 80 now.");
	printf("Address of p : %d\n", *ab);
	printf("Value of p : %p\n", ab);
	
	
	
}
