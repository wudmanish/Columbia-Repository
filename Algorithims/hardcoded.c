#include <stdio.h>
int main(int argc, char *argv[])
{
	int right[8];
	int i, a, c;
	for (i = 0; i < 8; i++){
right[i] = i + 0;
}
	for(a=1; a < 8; a++){
printf("Element[%d] = %d\n", i, right[a]);
}
 	printf("Select a number:");
   scanf("%d", &c);
	if (c <= 8){
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
