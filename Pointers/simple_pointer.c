/*
1. Write a program in C to show the basic declaration of pointer.
Expected Output :

z stores the address of m  = 0x7ffe97a39854
 *z stores the value of m = 10
 &m is the address of m = 0x7ffe97a39854
 &n stores the address of n = 0x7ffe97a39858
 &o  stores the address of o = 0x7ffe97a3985c
 &z stores the address of z = 0x7ffe97a39860    
*/

#include <stdio.h>
int main(int argc, char *argc[])
{
 	int q, p, *p;
	printf("Give me the first number: \n");
	scanf("%d", &n1);
	p = 11;
	q = &p;
	*p = &q;
	printf(" %p stores the address of %d.\n", q ,*p);
}


