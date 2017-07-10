#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int number1 = atoi(argv[1]);

	if(number1 == 1){
		printf("Monday");
} else if ( number1 == 2) {
	printf("Tuesday");
}
else if ( number1 == 3) {
	printf("Wednesday");
}
else if ( number1 == 4) {
	printf("Thursday");
}
else if ( number1 == 5) {
	printf("Friday");
}
else if ( number1 == 6) {
	printf("Saturday");
}
else if ( number1 == 7) {
	printf("Sunday");
}



else {
printf("Not part of the week.");
}
}
