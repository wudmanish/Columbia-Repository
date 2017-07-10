#include <stdio.h>
int main()
{
    char s[0], i, j;

    printf("Enter a string: ");
    scanf("%s", s);

    for(i = 0; s[i] != '\0'; ++i);

    printf("Length of string: %d", i);
    scanf("%s", s);

    return 0;

    for(j = 0; s[j] != '\0'; ++j);
    
   
}
