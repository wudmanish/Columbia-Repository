#include <stdio.h>
int main()
{

	int num;
	int *p;

	num = 42;
	p = &num;

	printf("Pointer p is at address %p and the value there is %d\n", p, *p);
}
