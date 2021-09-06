#include "stack.h"
sint8 Size = 20;
sint8 top = -1;
/*
 *[Function name]:push
 *[description]: responsible for put data in stack
 */
void push(uint8 u8_data) {
	//check if stack is full if full give stack over flow
	if (top == (Size - 1))
		printf("stack overFlow");
	// if stack not full then increase top by 1 then assign data to stack
	else {
		top++;
		stack1[top] = u8_data;
		//printf("pushed : %c \n " , stack1[top]);
	}
}
/*
 *[Function name]:push
 *[description]: responsible for remove data out of stack and return it
 */
uint8 pop() {
	uint8 topOfStack = 0;
	// if stack is empty so nothing to return
	if (top == -1)
		printf("stack is empty");
	else {
		topOfStack = stack1[top];
		//  printf("poped : %c \n " , topOfStack);
		top--;
	}
	return topOfStack;
}
/*
 *[Function name]:printStack
 *[description]: responsible for view stack without pop it
 */
void printStack() {
	printf("elements in stack : \n");
	for (int i = top; i >= 0; i--) {
		printf("%c , %d \n", stack1[i], i);
	}
}
