#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int number1 = atoi(argv[1]);

	if(number1 > 0){
		printf("Positively Positive: %d \n", number1);
} else if ( number1 < 0) {
	printf("Positively Negative: %d. \n", number1);
}

else {
printf("Neither positive nor negative.");
}
}
