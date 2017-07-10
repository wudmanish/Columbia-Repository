#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
	int units;
	float amount, surcharge=0.2;

	units = atoi(argv[1]);

	if(units <= 50){
		amount = units*0.5;
	}
	else if (units <= 150) {
		amount = 25 + (units-50)*0.75;
} else if(units <= 250) {
	amount = 100 + (units-150)*1.20;
}
  else {
	amount = 220 + (units-250)*1.50;
}

amount = amount*(surcharge+1);

	printf("your bill is: $%.2f", amount);
	return 0;
}
