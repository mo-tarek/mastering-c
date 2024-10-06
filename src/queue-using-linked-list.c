#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
typedef struct Node{
	int data;
	struct Node *next; // Pointer to the next node
}Node;

// Define the queue structure
typedef struct Queue{
	Node *front; // Pointer to the front node
	Node *rear;  // Pointer to the rear node
}Queue;

// Function to initalize the queue
void initQueue(Queue *q){
	q->front = NULL; // Queue is empty
	q->rear = NULL;  // Queue is empty
}

// Function to check if the queue is empty
int isEmpty(Queue *q){
	return q->front == NULL;
}

// Function to enqueue an element
void enqueue(Queue *q, int value){
	Node *newNode = (Node *)malloc(sizeof(Node));
	if(!newNode){
		frprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	newNode->data = value; // Set the data
	newNode->next = NULL;  // New node will be at the end
	
	if(isEmpty(q)){
		q->front = newNode; // Queue is empty, new node becomes front
	}else{
		q->rear = newNode; // Link the new after rear
	}
	q->rear = newNode; // Update rear to the new node
	printf("%d enqueued to queue\n", value);
}	

// Function to dequeue an element 
int dequeue(Queue *q){
	if(isEmpty(q)){
		printf("Queue underflow! Can't dequeue\n");
		return -1; // Return a sentinel value
	}
	Node *temp = q->front; // Store the front node
	int dequeuedValue = temp->data; // Get the value
	q->front = q->front->next; // Update front to the next node
	if(q->front == NULL){
		q->rear = NULL; // Queue becomes empty
	}
	free(temp); // Free the old front
	return dequeuedValue; // Return the dequeued value
}

// Function to display the queue elements 
void display(Queue *q){
	if(isEmpty(q)){
		printf("Queue is empty\n");
		return;
	}
	Node *temp = q->front;
	printf("Queue elements: ");
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}


// Main function to demonstrate the queue
int main(void){
	Queue q;
	initQueue(&q);

	enqueue(&q, 10);
	enqueue(&q, 20);
	enqueue(&q, 30);
	display(&q);

	printf("%d dequeued from queue\n", dequeue(&q));
	display(&q);

	return 0;
}
