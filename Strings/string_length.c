#include <stdio.h>
int main()
{
int i;
printf("How many characters in the array: Put more than six");
scanf("%d", i);
if(i > 6){
return 0;
}else{

char greeting[i] = {'A', 'l', 'o', 'h', 'a', '\0'};
printf("%s\n", greeting);

printf("Greeting has %d characters.\n", i);
}
}
