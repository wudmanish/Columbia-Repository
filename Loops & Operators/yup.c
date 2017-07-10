#include <stdio.h>
int main(int argc, char *argv[])
{
	int number1 = atoi(argv[1]);
	int number2 = atoi(argv[2]);

	if(number1 > number2){
		printf("Max is: %d. \n", number1);
} else if ( number1 < number2) {
	printf("Max is: %d. \n", number2);
}
else {
printf("They are equal!");
}
}
