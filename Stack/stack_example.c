#include <stdio.h>

int Max_Size = 8;
int stack[8];
int top = -1;

int isEmpty() {
   if (top == -1) {
	return 1;
}
else {
	return 0;
	}
}
int isFull() {
	if ( top == Max_Size) {
	return 1;
	}
	else {
	return 0;
	}
}

int pop() {
	int data;

if (!isEmpty()) {
   data = stack[top];
   top = top - 1;
   return data;
   }
else {
printf("Stack is empty.");
    }
}

int push(int data) {
  if (!isFull()) {
top = top + 1;
stack[top] = data;
}
else {
printf("Stack is full.");
	}
}

int peek() {
return stack[top];
}

int main()
{
  push(3);
  push(2);
  push(6);
  push(10);
  push(1);

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

