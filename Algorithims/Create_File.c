#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
srand(time(NULL));
int a = rand();
FILE *fp = fopen("Meow.txt", "a");
char choice;
if (fp != NULL)
{ 
    const char *so = "Hello, do you copy";
    fprintf(fp, "Your random number is: %d. Words: %s\n", a, so);
}
fclose(fp);
}
