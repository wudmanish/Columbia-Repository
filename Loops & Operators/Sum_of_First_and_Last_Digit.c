 
#include <stdio.h>
 
int main()
{
    int num, sum=0, firstDigit, lastDigit;
 
    /* Read a number from user */
    printf("Find sum of the first and last digits: ");
    scanf("%d", &num);
     
  
    if(num > 10) 
    {
        lastDigit = num % 10;
    }
 
    /* Find the first digit by dividing n by 10 until first digit is left */
    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;
 
    /* Compute the sum */
    sum = firstDigit + lastDigit; 
 
    printf("Sum of first and last digit = %d", sum);
 
    return 0;
}
