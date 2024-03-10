#include <stdio.h>

int size = 10;
int stack[10];
int top = -1;
int data;

int push(int data);
int pop();
int peek();
int isfull();
int isempty();

void main()
{
	push(56);
	push(34);
	push(12);
	printf("The last element in the array is: %d\n",peek());
	pop();
	printf("The last element is %d\n",peek());
		
}


int push(int data)
{
	if (!isfull())
	{
		top += 1;
		stack[top] = data;	
	}
	else
	{
	
		printf("Stack is full\n");	}
	
}

int pop()
{
	if (!isempty())
		top -= 1;
	else
		printf("Stack is empty\n");
}

int peek()
{
	return stack[top];
}



int isfull()
{
	if (top == size)
		return 1;
	else
		return 0;	
}

int isempty()
{
	if (top == -1)
		return 1;
	else
		return 0;	
}




