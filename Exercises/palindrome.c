#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num, rem, sum = 0;
	
	printf("Enter an integer number\n");
	scanf("%d", &num);

while(num)
{
	rem = num %10;
	sum = sum + rem;
	num = num / 10;
	}

	printf("The sum of digits is %d", sum);
}
