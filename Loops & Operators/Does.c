#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int number1 = atoi(argv[1]);
	int number2 = atoi(argv[2]);
	int number3 = atoi(argv[3]);

	if(number1 > number2 && number1 > number3){
		printf("Max is: %d. \n", number1);
} else if ( number1 < number2 && number2 > number3) {
	printf("Max is: %d. \n", number2);
}
else if ( number1 < number3 && number3 > number2) {
	printf("Max is: %d. \n", number3);
}

else {
printf("They are equal!");
}
}
