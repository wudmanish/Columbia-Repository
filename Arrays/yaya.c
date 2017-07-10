#include <stdio.h>
int main(int argc, char *argv[])
{
	int y, i, a, c;

	int right[15];
printf("Enter the number of items in the aray:");
scanf("%d", &y);
	for (i = 0; i < 15; i++){
right[i] = i + 20;
}
	for(a=0; a < 8; a++){
printf("Element[%d] = %d\n", i, right[a]);
}
 	printf("Select a number up to 8:");
   scanf("%d", &c);
	if (c <= 15){
c--;
	printf("You picked: Element[%d] = %d\n", i, right[c]);
}else if (c > 8){
	int c;
	printf("Something on the list: ");
	scanf("%d", &c);
if (c <= 8){
	c--;
	printf("You picked: Element[%d] = %d\n", i, right[c]);
}}
	if (c <= 8){
	printf("You picked: Element[%d] = %d\n", i, right[c]);
}}
