#include <stdio.h>

int main(int argc, char *argv[])
{
	int n1, n2, sum, *p, *q;
	printf("Give me the first number: \n");
	scanf("%d", &n1);

	printf("Give me the second number: \n");
	scanf("%d", &n2);

	p = &n1;
	q = &n2;

	sum = *p + *q;

	printf("The sum is: %d \n", sum);
}
