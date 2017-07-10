#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int digits = 0;
	int mdigits = atoi(argv[digits]);

while(n != 0){
	n /= 10;
	++digits;
	n*10^--digits; 
	mdigits*10^--digits;
}
  
	printf("Swapped:[%d].\n", mdigits);
}
/* 4321 
1	4321-4000
4	4 * 10(tothe3)

	321 + 1 * 10(tothe3)
1321-1
1320
1324
*/ 
