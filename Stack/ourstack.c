//queue
//dequeue
//first
//rear
//top
//implement a stack using structs, pointers, and arrays
#include <stdio.h>
#include <stdlib.h>
#include <limit.h>
int main()
{
struct *Stack{ 
   int push(int data) {
  if (!isFull()) {
top = top + 1;
stack[top] = data;
}
else {
printf("Stack is full.");
	}
}

printf("Input element to count from in array:");
scanf("%d", &n);
   int pop ()
{
	int *data;
	
if (!isEmpty()) {
   data = stack[top];
   top = top - 1;
   return data;
   }
else {
printf("Stack is empty.");
    }
}

};  
   int Max_Size = 8; 
   int isEmpty() {
   if (top == -1) {
	return 1;
}
else {
	return 0;
	}
}
   int counter = 0;
   int top = -1;
   int array[8] = return intArray[front];
   int peek() {
return intArray[front];


}

  

int main ()
{
while (i = 0, i < n, i++)
push(i);

while(n = 0, n < i, n++) {
  printf("Array[%d]: %d\n" , n, i);

}
  printf("Top of the stack is: %d\n", peek());
  printf("Stack: \n");

 while (!isEmpty()) {
	int data = pop();
	printf("%d\n", data);
	}

	if (isFull()) {
		printf("Stack is full");
	}

	if (isEmpty()) {
		printf("Stack is empty.");
}
 return 0;
}
//()()(())
//()(
//)( (()()
































