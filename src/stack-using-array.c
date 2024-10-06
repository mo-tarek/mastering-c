#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 100 // Maximum size of the stack

typedef struct Stack{
	int arr[MAX]; // Array to hold the stack elements 
	int top; // Index of the top element
}Stack;

// Function to intialize the stack
void initStack(Stack *s){
	s->top = -1; // Stack is empty
}

// Function to check if the stack is full 
int isFull(Stack *s){
	return s->top == MAX - 1;
}

// Function to check if the stack is empty 
int isEmpty(Stack *s){
	return s->top == -1;
}

// Function to push an element onto the stack
void push(Stack *s, int value){
	if(isFull(s)){
		printf("Stack overflow! can't push %d\n", value);
		return;
	}
	s->arr[++(s->top)] = value; // Increment top and add value
	printf("%d pushed to stack\n", value);
}

// Function to pop an element from the stack
int pop(Stack *s){
	if(isEmpty(s)){
		printf("Stack underflow! can't pop\n");
		return INT_MIN; // Return a sentinel value
	}
	return s->arr[(s->top)--]; // Return the top value and decrement top
}

// Function to peek at the top element of the stack
int peek(Stack *s){
	if(isEmpty(s)){
		printf("Stack is empty! can't peek\n");
		return INT_MIN; // Return a sentinel value
	}
	return s->arr[s->top]; // Return the top element
}

// Function to display the stack elements 
void display(Stack *s){
	if(isEmpty(s)){
		printf("Stack is empty\n");
		return;
	}
	printf("Stack elements: ");
	for(int i = 0; i <= s->top; i++){
		printf("%d ", s->arr[i]);
	}
	printf("\n");
}

// Main function to demonstrate the stack
int main(void){
	Stack s;
	initStack(&s);

	push(&s, 10);
	push(&s, 20);
	push(&s, 30);
	display(&s);

	printf("%d popped from stack\n", pop(&s));
	display(&s);

	printf("Top element is %d\n", peek(&s));
	return 0;
}
