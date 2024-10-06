#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
typedef struct Node{
	int data;
	struct Node *next; // Pointer to the next node
}Node;

// Define the stack structure
typedef struct Stack{
	Node *top; // Pointer to the top node
}Stack;

// Function to initalize the stack
void initStack(Stack *s){
	s->top = NULL; // Stack is empty
}

// Function to check if the stack is empty
int isEmpty(Stack *s){
	return s->top == NULL;
}

// Function to push an element onto the stack
void push(Stack *s, int value){
	Node *newNode = (Node *)malloc(sizeof(Node));
	if(!newNode){
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	newNode->data = value; // Set the data
	newNode->next = s->top; // Link new node to previous top
	s->top = newNode; // Update top to new node
	printf("%d pushed to stack\n", value);
}

// Function to pop an element from the stack
int pop(Stack *s){
	if(isEmpty(s)){
		printf("Stack underflow! Can't pop\n");
		return INT_MIN; // Return a sentinel value
	}
	Node *temp = s->top; // Store the top node
	int poppedValue = temp->data; // Get the value 
	s->top = s->top->next; // Update top to next node
	free(temp); // Free the old top 
	return poppedValue; // Return the popped value
}

// Function to peek at the top element of the stack
int peek(Stack *s){
	if(isEmpty(s)){
		printf("Stack is empty! Can't peek\n");
		return INT_MIN; // Return a sentinel value
	}
	return s->top->data; // Return the element
}

// Function to display the stack elements 
void display(Stack *s){
	if(isEmpty(s)){
		printf("Stack is empty\n");
		return;
	}
	Node *temp = s->top;
	printf("Stack elements: ");
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

// Main function to demonstrate the stack
int main(){
	Stack s;
	inintStack(&s);

	push(&s, 10);
	push(&s, 20);
	push(&s, 30);
	display(&s);

	printf("%d popped from stack\n", pop(&s));
	display(&s);

	printf("Top elements is %d\n", peek(&s));
	return 0;
}
